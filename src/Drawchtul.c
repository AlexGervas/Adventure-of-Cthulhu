#include <graphics.h>
#include "Drawchtul.h"

void Drawchtul ( int x, int y)
{
	int poly [18];
	poly[0]=x-15;
	poly[1]=y;
	poly[2]=x-17;
	poly[3]=y+40;
	poly[4]=x-9;
	poly[5]=y+15;
	poly[6]=x-9;
	poly[7]=y+40;
	poly[8]=x;
	poly[9]=y+15;
	poly[10]=x+6;
	poly[11]=y+40;
	poly[12]=x+10;
	poly[13]=y+15;
	poly[14]=x+20;
	poly[15]=y+40;
	poly[16]=x+15;
	poly[17]=y;

	setcolor (2);
	fillpoly(9,poly);
	setcolor (2);
	moveto(x,y);

	setcolor (2); //head
	fillellipse (x, y,15, 15);

	setcolor (3); //eyes
	fillellipse (x-5, y,2, 2);
	fillellipse (x+5, y,2, 2);

	setcolor (4);  //mouth
	arc(x,y,45, 139,8);
}
