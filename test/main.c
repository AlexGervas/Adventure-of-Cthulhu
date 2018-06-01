#define CTEST_MAIN
#include <menu.h>
#include <ctest.h>

char deck[8][8];

CTEST(Syntax, Correct) 
{
	int result = checkmenu("20");
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(Syntax, Incorrect) 
{
    	int result = input_check("10"); 
	int expected = 0; 
	ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv) 
{
    	return ctest_main(argc, argv);
}
