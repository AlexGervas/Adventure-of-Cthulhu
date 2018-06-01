#define GRAPHICS_WAIT_FOR_CHAR
#include <graphics.h>
#include "wait_for_char.h"

void wait_for_char () 
{

	//Wait for a key press
	int in = 0;

	while (in == 0) {
  		in = getchar();
	}
}
