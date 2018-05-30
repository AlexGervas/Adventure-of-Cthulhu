#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "moveenemy.h"
#include "knight.h"
#include "Peasant.h"
#include "enemy3.h"
#include "cleaning.h"
void moveenemy (int x, int y, int kek)
{
	//int kek=rand()%3+1;
	if (kek==1) knight(x, y);
	if (kek==2) Peasant(x, y);
	if (kek==3) enemy3(x, y);
	delay(50);   //Sleep (50);
	cleaning (x,y);
}
