#include <graphics.h>
#include "cthulhu.h"
#include "Drawchtul.h"
#include "moveenemy.h"
#include "cleaning.h"
#include "gun.h"
#include "kbhit.h"
#include <stdio.h>
#include <stdlib.h>
int xe=530,ye=250, record=0, xg=30,yg=250, ch=0, xh=30,yh=250;
int life = 0;
int cthulhu (int kek)
{
	Drawchtul (xh,yh);
	if (life == 0) life = moveenemy (xe,ye, kek);
	else moveenemy (xe,ye, kek);
	int lifecth = 3;
	char c;
	if(kbhit())
        {
           	c=getchar();
		if (c == 'w' && yh>99)
		{
			cleaning (xh,yh);
			yh-=100;
			Drawchtul (xh,yh);
       		}
        	if (c == 's' && yh<401)
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
        if (xg >= xe && yg>=ye)
        {
		life--;
		//printf ("%d ", life);
		ch=0;
            	xg=30;
		if (life == 0)
            	{
			cleaning (xe,ye);
           		xe=540;
            		record++;
            		ch=0;
            		xg=30;
			kek=rand()%3+1;
		}
        }
	xe-=5;
	if (xe<0 || xe==535)
	{
		if (xe < 0) lifecth --;
		kek=rand()%3+1;
		xe=530;
	}
	if (lifecth == 0) return 0;
	if (ch == 1)
        {
            	xg+=6;
            	gun (xg,yg);
        }
	return 1;
}
