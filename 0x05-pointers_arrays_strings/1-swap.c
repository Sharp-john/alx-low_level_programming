#include "main.h"
/**
*swap_int - swap 2 numbers
*@a:1st num
*@b:2nd num
**/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

