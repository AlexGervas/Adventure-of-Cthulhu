#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <time.h>
#include <string>
#include <sstream>
#include <vector>

using namespace sf;
using namespace std;

void setFillColor(const Color& color);
int ts = 56; 
Vector2i offset(15, 15);
int rec = 0;

struct Anti
{
	int x, y, kind, match, alpha;
	Anti(){ match = 0; alpha = 255; }
};

int main()
{
	Font font;
	font.loadFromFile("BuxtonSketch.ttf");
	srand(time(NULL));
	RenderWindow app(VideoMode(1024, 512), "Cthulhu!");
	app.setFramerateLimit(60);

	Texture t1, t2, t3, t4, t5,t6;
	t1.loadFromFile("images/back.png");
	t2.loadFromFile("images/cthulh.png");
	t3.loadFromFile("images/sprites.png");
	t4.loadFromFile("images/fire.png");
	t5.loadFromFile("images/heart.png");
	t6.loadFromFile("images/coins.png");

	Sprite Back(t1), Hero(t2), Enemy(t3), Fire(t4), Heart(t5), Coins (t6);

	Anti En;

	En.x = 800;
	En.y = rand() % 400;
	En.kind = rand() % 3;
	En.match = En.kind + 1;

	int x = 100, y = 100, h = 200, alphaF = 0, xf = x, yf = y;
	int mark = 0, life = 3;
	const int N = 3;
	int xc[N];
	int yc[N];
	for (int i = 0; i < N; i++)
	{
		xc[i] = rand() % 900 + 100;
		yc[i] = rand() % 400 + 100;
	}

	while (app.isOpen())
	{
		Event e;
		Text txt, txt1;
		txt.setFont(font);
		txt.setCharacterSize(25);
		txt.setColor(Color::Blue);
		txt.setPosition(900, 30);
		txt.setString(string("Score: \n      ") + to_string(rec));

		txt1.setFont(font);
		txt1.setCharacterSize(40);
		txt1.setColor(Color::Red);
		txt1.setPosition(125, 35);
		txt1.setString(string("x") + to_string(life));

		while (app.pollEvent(e))
		{
			if (e.type == Event::Closed || life <= 0)
				app.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Down)) y += 3;
		if (Keyboard::isKeyPressed(Keyboard::Up)) y -= 3;
		if (Keyboard::isKeyPressed(Keyboard::Right)) x += 3;
		if (Keyboard::isKeyPressed(Keyboard::Left)) x -= 3;
		if (Keyboard::isKeyPressed(Keyboard::Return))
		{
			xf += 5;
			yf = y;
			alphaF = 255;
			mark = 1;
		}
		if (mark == 1) xf += 5;

		if (xf > 900)
		{
			mark = 0;
			alphaF = 0;
			xf = x;
			yf = y;
		}
		if (En.x > 30)
		{
			En.x -= 2;
		}
		else
		{
			En.x = 800;
			En.y = rand() % 400;
			En.kind = rand() % 3;
			En.match = En.kind + 1;
		}
		if (abs(En.x - xf) < 65 && abs(En.y - yf) < 65 && mark == 1)
		{
			En.match--;
			//En.x += 80;
			alphaF = 0;
			xf = x;
			yf = y;
			if (En.match == 0)
			{
				mark = 0;
				alphaF = 0;
				xf = x;
				yf = y;
				En.x = 800;
				En.y = rand() % 400;
				En.kind = rand() % 3;
				En.match = En.kind + 1;
				rec++;
			}
		}
		if (En.x == x && abs(En.y - y) < 65)
		{
			life--;
		}
		for (int i = 0; i < N; i++)
		{
			if (abs(x - xc[i]) < 30 && abs(y - yc[i]) < 30)
			{
				xc[i] = rand() % 900 + 100;
				yc[i] = rand() % 400 + 100;
				rec += 5;
			}
		}
		Enemy.setTextureRect(IntRect(En.kind*131, 0, 131, 131));
		Enemy.setColor(Color(255, 255, 255, En.alpha));
		Enemy.setPosition(En.x, En.y);

		Fire.setColor(Color(255, 255, 255, alphaF));
		Fire.setPosition(xf, yf);

		Hero.setPosition(x, y);

		Heart.setPosition(50, 30);

		app.draw(Back);
		for (int i = 0; i < N; i++)
		{
			Coins.setPosition(xc[i], yc[i]);
			app.draw(Coins);
		}
		app.draw(Hero);
		app.draw(Enemy);
		app.draw(Fire);
		app.draw(txt);
		app.draw(Heart);
		app.draw(txt1);

		
		app.display();
	}

	return 0;
}
