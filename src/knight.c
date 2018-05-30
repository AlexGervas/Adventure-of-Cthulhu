#include <graphics.h>
#include "knight.h"
#include "moveenemy.h"

void knight (int x, int y)
{
	setcolor (CYAN);
	moveto(x,y);
	setcolor (3); //head
	fillellipse (x, y,15, 15);
	setcolor (15);
 
	setcolor (15); //hair
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

	setcolor (BLACK); //eyes
	setcolor (4);
	fillellipse (x-5, y,2, 2);
	fillellipse (x+5, y,2, 2);

	setcolor (16);
	fillellipse (x+0.5, y+3,2, 2); //nose

	setcolor (4);
	//fillellipse (x+0.5, y+5,5, 1); //mustache
	fillellipse (x+0.5, y+7,5, 1);

	setcolor (CYAN);
	line(x,y + 16, x, y +40);
	line(x+1,y + 17, x+1, y +41);
	line(x+10,y + 30, x, y+15);
	line(x+11,y + 31, x+1, y+16);
	line(x-10,y + 30, x, y+15);
	line(x-11,y + 31, x+1, y+16);
	setcolor (5);
	setcolor (BLACK);

	fillellipse (x-15, y+30,8, 18); //shield
	setcolor (CYAN);
	line(x,y + 40, x + 10, y + 55);
	line(x+1,y + 41, x + 11, y + 56);
	line(x,y + 40, x - 10, y + 55);
	line(x+1,y + 41, x - 11, y + 56);

	setcolor (WHITE);  //sword
	line(x+10,y + 30, x+20, y-15);
	line(x+11,y + 31, x+21, y-16);
}
