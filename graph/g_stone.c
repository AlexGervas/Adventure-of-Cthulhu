#include <graphics.h>
#include <stdlib.h>

void Draw ( int x, int y)
{
	moveto(x,y); 
	setcolor(6);
	fillellipse (x+15, y-20 ,15, 8);
}
int main ()
{
	float x = 200, y = 200;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	Draw(x, y);
	getchar();
	return 0;
}
