#include <graphics.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "Drawchtul.h"
#include "cleaning.h"
#include "gun.h"
#include "knight.h"
#include "Peasant.h"
#include "enemy3.h"
#include "moveenemy.h"
#include "inttostr.h"
#include "cthulhu.h"
#include "menu.h"
#include "kbhit.h"

int main ()
{
	bool isGameActive = true;
	int xe=530;
	int driver, mode;
	driver = DETECT;  /* auto-detection */
	mode = 0;
	initgraph(&driver, &mode, "c:\\bc5\\bgi");
	menu ();
	//setcolor (1); 
	//bar(0,0,500,250);
	//setcolor (2); 
	//bar(0,250,500,500);
	srand (time(NULL));
	int record = 0;
	char s[5];
	int kek=rand()%3+1;
	do
	{
		int i=4;
		int tmp;
		tmp=record;	
		while(tmp>0)
		{
			s[i]=tmp%10+'0';
			tmp/=10;
			i--;
		}
		setcolor (GREEN);
		outtextxy(430,30,s);
		//record = cthulhu (kek);
		cthulhu (kek);
		if (xe<0 || xe==535)
		{
			kek=rand()%3+1;
			xe=530;
		}
		//setfillstyle(1,1);
		//bar(0,0,500,250);
		//setfillstyle(1,2);
		//bar(0,250,500,500);
	}
	while(isGameActive);
	getchar();
	return 0;
}

