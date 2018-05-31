#define GRAPHICS_KEK
#include "graphics.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "inttostr.h"
#include "cthulhu.h"

void kek ()
{
	bool isGameActive = true;
	srand (time(NULL));
	int kek=rand()%3+1;
	int record = 0;
	char s[5];
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
		cthulhu (kek);
	}
	while(isGameActive);
	getchar();
}

