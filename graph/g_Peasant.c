#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

void Draw ( int x, int y)
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

int main ()
{
    float x = 200, y = 200;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    Draw(x, y);
    getchar();
    return 0;
}
