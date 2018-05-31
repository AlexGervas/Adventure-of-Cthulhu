#include <graphics.h>
#include "menu.h"
#include "cthulhu.h"
#include "kek.h"
int main ()
{
	char key;
	int driver, mode;
	driver = DETECT;  /* auto-detection */
	mode = 0;
	initgraph(&driver, &mode, "c:\\bc5\\bgi");
	int x=140, y=15;
	setcolor (GREEN);
	outtextxy(30,10, "New Game");
	outtextxy(30,40, "Records");
	outtextxy(30,70, "Help!");
	outtextxy(30,100, "Exit");
	fillellipse (x, y ,4, 4);
	while (1)
	{
		key=getchar();
		if (key == 's' && y<104)
		{
			setcolor (BLACK);
			fillellipse (x, y ,4, 4);
			y+=30;
			setcolor (GREEN);
			fillellipse (x, y ,4, 4);
       		}
		if (key == 'w' && y>16)
		{
			setcolor (BLACK);
			fillellipse (x, y ,4, 4);
			y-=30;
			setcolor (GREEN);
			fillellipse (x, y ,4, 4);
       		}
		if (key == 13)
		{
			setcolor(BLACK); 
			bar(0,0,160,110); 
			switch (y)
			{
				case 15: kek (); break;
				case 45: break;
				case 75:  outtextxy(30,10, "Press w or s to move. Press enter to shoot"); break;
				case 105: break;
			}
       		}
		
	}
return 0;
}
