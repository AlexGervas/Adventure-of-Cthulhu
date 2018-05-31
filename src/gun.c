#include "graphics.h"
#include "gun.h"

void gun (int x, int y)
{
	setcolor (6);
 	bar(x-5,y-5,x+10,y+10);
	delay(15);
	setcolor (0);
 	bar(x-5,y-5,x+10,y+10);
}
