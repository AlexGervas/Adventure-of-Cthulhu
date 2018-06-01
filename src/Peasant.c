#include <graphics.h>
#include "Peasant.h"
#include "moveenemy.h"

void Peasant (int x, int y)
{
	moveto(x,y);
	setcolor (13);   //head
	fillellipse (x, y,15, 15);

	setcolor (1); //eyes
	fillellipse (x-5, y,2, 2);
	fillellipse (x+5, y,2, 2);

	setcolor (16); //nose
	fillellipse (x+0.5, y+3,2, 2); 

	setcolor (4); //mouth
	fillellipse (x+0.5, y+7,5, 1);

	setcolor (6);  //beard
	line(x+1, y+30, x+9, y+6);
	line(x+9, y+6, x-9, y+7);
	line(x-9, y+7, x+1, y+30);

	/*int poly [12];
	poly[0]=x+1;
	poly[1]=y+30;
	poly[2]=x+9;
	poly[3]=y+6;

	poly[4]=x+9;
	poly[5]=y+6;
	poly[6]=x-9;
	poly[7]=y+7;

	poly[8]=x-9;
	poly[9]=y+7;
	poly[10]=x+1;
	poly[11]=y+30;
	setcolor (15);
	fillpoly(7,poly);*/

	setcolor (13);
	line(x,y + 16, x, y +40);
	line(x+1,y + 17, x+1, y +41);
	line(x+10,y + 30, x, y+15);
	line(x+11,y + 31, x+1, y+16);
	line(x-10,y + 30, x, y+15);
 	line(x-11,y + 31, x+1, y+16);
	setcolor (13);
	line(x,y + 40, x + 10, y + 55);
	line(x+1,y + 41, x + 11, y + 56);
	line(x,y + 40, x - 10, y + 55);
	line(x+1,y + 41, x - 11, y + 56);
}
