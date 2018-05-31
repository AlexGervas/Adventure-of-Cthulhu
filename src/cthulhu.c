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
void cthulhu (int kek)
{
	Drawchtul (xh,yh);
        moveenemy (xe,ye, kek);
	char c;
	if(kbhit())
        {
           c=getchar();
		//scanf ("%c", &c);
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
            cleaning (xe,ye);
            xe=540;
            record++;
            ch=0;
            xg=30;
        }
	xe-=5;
	if (xe<0 || xe==535)
	{
		kek=rand()%3+1;
		xe=530;
	}
	if (ch == 1)
        {
            xg+=6;
            gun (xg,yg);
        }
}
