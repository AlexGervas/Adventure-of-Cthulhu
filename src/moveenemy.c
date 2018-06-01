#define GRAPHICS_MOVEENEMY
#include "graphics.h"
#include <stdlib.h>
#include <stdio.h>
#include "moveenemy.h"
#include "knight.h"
#include "Peasant.h"
#include "stone.h"
#include "cleaning.h"
int moveenemy (int x, int y, int kek)
{
	int life = 1;
	if (kek==1) { life = 3; knight(x, y);}
	if (kek==2) Peasant(x, y);
	if (kek==3) { life = 10; stone(x, y);}
	delay(50); 
	cleaning (x,y);
	return life;
}
