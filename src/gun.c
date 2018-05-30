#include <graphics.h>
#include "gun.h"

void gun (int x, int y)
{
	//setfillstyle(1,6);
	setcolor (6);
 	bar(x-5,y-5,x+10,y+10);
 	//Sleep(15);
	delay(15);
	//setfillstyle(1,0);
	setcolor (0);
 	bar(x-5,y-5,x+10,y+10);
}
