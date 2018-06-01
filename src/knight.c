#define GRAPHICS_KNIGHT
#include <graphics.h>
#include "knight.h"
#include "moveenemy.h"

void knight (int x, int y)
{
	moveto(x,y);
	setcolor (11); //head
	fillellipse (x, y,15, 15);
 
	setcolor (6); //hair
	fillellipse (x, y-15 ,4, 4);
	fillellipse (x+2, y-14 ,4, 4);
	fillellipse (x-2, y-14 ,4, 4);
	fillellipse (x+3, y-13 ,4, 4);
	fillellipse (x-3, y-14 ,4, 4);
	fillellipse (x+4, y-13 ,4, 4);
	fillellipse (x-4, y-14 ,4, 4);
	fillellipse (x+5, y-13 ,4, 4);
	fillellipse (x-5, y-13 ,4, 4);
	fillellipse (x+6, y-12 ,4, 4);
	fillellipse (x-6, y-12 ,4, 4);
	fillellipse (x+7, y-11 ,4, 4);
	fillellipse (x-7, y-11 ,4, 4);

	setcolor (1); //eyes
	fillellipse (x-5, y,3, 2);
	fillellipse (x+5, y,3, 2);

	setcolor (13);  //nose
	fillellipse (x+0.5, y+3,2, 2); 

	setcolor (4);  //mouth
	fillellipse (x+0.5, y+8,4, 1);
	//fillellipse (x+0.5, y+5,5, 1); //mustache

	setcolor (11);
	line(x,y + 16, x, y +40);
	line(x+1,y + 17, x+1, y +41);
	fillellipse (x, y+28,3, 16);
	line(x+10,y + 30, x, y+15);
	line(x+11,y + 31, x+1, y+16);
	line(x-10,y + 30, x, y+15);
	line(x-11,y + 31, x+1, y+16);

	setcolor (9);  //shield
	fillellipse (x-15, y+30,8, 18); 
	setcolor (11);
	line(x,y + 40, x + 10, y + 55);
	line(x+1,y + 41, x + 11, y + 56);
	line(x,y + 40, x - 10, y + 55);
	line(x+1,y + 41, x - 11, y + 56);

	setcolor (WHITE);  //sword
	line(x+10,y + 30, x+20, y-15);
	line(x+11,y + 31, x+21, y-16);
}
