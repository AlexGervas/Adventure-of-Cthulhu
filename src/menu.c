#define GRAPHICS_MENU
#include "graphics.h"
#include "menu.h"
#include "cthulhu.h"
#include "kek.h"
#include <stdio.h>
#include <X11/Xlib.h>
int checkmenu (int y)
{
	if (y<104 && y>16) return 1;
	else return 0;
}
int main ()
{
	//XInitThreads();
	char key;
	int driver, mode;
	driver = DETECT;  /* auto-detection */
	mode = 0;
	initgraph(&driver, &mode, "");
	int x=140, y=15;
	setcolor (GREEN);
	outtextxy(30,10, "New Game");
	outtextxy(30,40, "Records");
	outtextxy(30,70, "Help!");
	outtextxy(30,100, "Exit");
	fillellipse (x, y ,4, 4);
	while (key!=13)
	{
		key=getchar();
		if (key == 's' && checkmenu (y))
		{
			setcolor (BLACK);
			fillellipse (x, y ,4, 4);
			y+=30;
			setcolor (GREEN);
			fillellipse (x, y ,4, 4);
      	 	}
		if (key == 'w' && checkmenu (y))
		{
			setcolor (BLACK);
			fillellipse (x, y ,4, 4);
			y-=30;
			setcolor (GREEN);
			fillellipse (x, y ,4, 4);
       		}
	}
	if (key == 13)
		{
			setcolor(BLACK); 
			bar(0,0,160,110); 
			switch (y)
			{
				case 15: kek (); break;
				case 45: break;
				case 75:outtextxy(30,10, "Press w or s to move. Press enter to shoot"); 
					outtextxy(100,22, "Game rules:");
					outtextxy(30,34, "1) The player gains points. Actions for which the account is increased:"); 
					outtextxy(60,46, "a) for every second of the game, 1 point is awarded"); 
					outtextxy(60,58, "b) For one killed peasant is credited with 20 points."); 
					outtextxy(30,70, "The peasant dies for 1 shot for losing the peasant is taken away 1 life (heart)");
					outtextxy(60,82, "c) For one killed soldier is charged 50 points."); 
					outtextxy(30,94, "The warrior dies for 3 shots. For loss to the warrior, the whole life (all the remaining hearts) is taken away."); 
					outtextxy(60,116, "d) For a stone is not charged a single point."); 
					outtextxy(30,128, "It can be jumped or destroyed in 10 strokes.");
					outtextxy(30,140, "When a pebble has come to you, the hero is deprived of all life (all hearts).");
					outtextxy(30,158, "2) Terms of completion of the game:"); 
					outtextxy(60,170, "Loss of all lives (all hearts)."); 
				break;
				case 105: break;
			}
       	}
closegraph();
return 0;
}
