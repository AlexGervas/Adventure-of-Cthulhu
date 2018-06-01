#define CTEST_MENU
#include <cleaning.h>
#include <Drawchtul.h>
#include <gun.h>
#include <inttostr.h>
#include <kbhit.h>
#include <knight.h>
#include <moveenemy.h>
#include <Peasant.h>
#include <stone.h>
#include <wait_for_char.h>
#include <cthulhu.h>
#include <kek.h>
#include <graphics.h>
#include <stdio.h>
#include <X11/Xlib.h>
#include <ctest.h>

char deck[8][8];

CTEST(Menu_move, Correct) 
{
	int result = checkmenu(20);
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(Menu_move, Incorrect) 
{
    	int result = input_check(10); 
	int expected = 0; 
	ASSERT_EQUAL(expected, result);
}
CTEST(Cthulhu_move, Correct) 
{
	int result = checkcthul(300);
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(Cthulhu_move, Incorrect) 
{
    	int result = chechcthul(20); 
	int expected = 0; 
	ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv) 
{
    	return ctest_main(argc, argv);
}
