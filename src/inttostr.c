#define GRAPHICS_INTTOSTR
#include <graphics.h>
#include "inttostr.h"

void inttostr(int chiselko, char s[])
{
	int i=4;
	int tmp=chiselko;
	while(chiselko>0)
	{
		s[i]=tmp%10+'0';
		tmp/=10;
		i--;
	}
}
