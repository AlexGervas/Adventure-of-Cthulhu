#include <graphics.h>
#include "cthulhu.h"
#include "Drawchtul.h"
#include "moveenemy.h"
#include "cleaning.h"
#include "gun.h"
#include "kbhit.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int xe=500, ye = 0, record=0, xg=30,yg=250, ch=0, xh=30,yh=250, kekkes = 0;
int life = 0;
int lifecth = 3;
int checkcthul (int y)
{
	if (y<401 && y>99) return 1;
	else return 0;
}
int cthulhu ()
{
	srand (time(NULL));
	Drawchtul (xh,yh);
	if (life == 0) 
	{
		ye = rand()%400+30; 
		kekkes=rand()%3+1; 
		life = moveenemy (xe,ye, kekkes); 
	}
	else moveenemy (xe,ye, kekkes);
	char c = 0;
	if(kbhit())
        {
           	c=getchar();
		if (c == 'w' && checkcthul(yh))
		{
			cleaning (xh,yh);
			yh-=100;
			Drawchtul (xh,yh);
       		}
        	if (c == 's' && checkcthul(yh))
		{
			cleaning (xh,yh);
			yh+=100;
			Drawchtul (xh,yh);
        	}
		if (c == 13)
		{
                	ch=1;
                	xg=xh;
                	yg=yh;
			gun (xg,yg);
		}
        }
        if (abs(xg-xe)<30 && abs(yg-ye)<30)
        {
		life--;
		//printf ("%d ", life);
		ch=0;
            	//xg=30;
		if (life == 0)
            	{
			cleaning (xe,ye);
           		xe=540;
            		record++;
            		ch=0;
            		//xg=30;
		}
        }
	xe-=5;
	if (xe<30)
	{
		lifecth --;
		//life = 0;
		xe=535;
	}
	if (lifecth == 0) return 0;
	if (ch == 1)
        {
            	xg+=6;
            	gun (xg,yg);
        }
	return 1;
}
