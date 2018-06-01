#include <graphics.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "kek.h"
#include "inttostr.h"
#include "cthulhu.h"
#include "wait_for_char.h"

void kek()
{
	bool isGameActive = true;
	srand (time(NULL));
	do
	{
		if (!cthulhu ()) break;
	}
	while(isGameActive);
	//wait_for_char ();
}
