#include "main.h"
/**
*print_sign-Return 1 when +ve 0 when -ve -1 when -ve
*@n:parameter
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
