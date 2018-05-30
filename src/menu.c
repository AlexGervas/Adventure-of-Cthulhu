#include <graphics.h>
#include "menu.h"

void menu ()
{
	setcolor (GREEN);
	outtextxy(30,10, "New Game");
	outtextxy(30,40, "Records");
	outtextxy(30,70, "Help!");
	outtextxy(30,100, "Exit");
}
