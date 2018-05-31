#include <graphics.h>
#include "menu.h"
#include "cthulhu.h"
void menu ()
{
	char key;
	int x=140, y=15;
	int kek=rand()%3+1;
	setcolor (GREEN);
	outtextxy(30,10, "New Game");
	outtextxy(30,40, "Records");
	outtextxy(30,70, "Help!");
	outtextxy(30,100, "Exit");
	fillellipse (x, y ,4, 4);
	while (1)
	{
		key=getchar();
		if (key == 's' && y<106)
		{
			setcolor (BLACK);
			fillellipse (x, y ,4, 4);
			y+=30;
			setcolor (GREEN);
			fillellipse (x, y ,4, 4);
       		}
		if (key == 'w' && y>14)
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
				case 15: cthulhu (kek); break;
				case 45: break;
				case 75:  break;
				case 105: break;
			}
       		}
		
	}
}
