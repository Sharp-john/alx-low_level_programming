#include "main.h"
/**
*print_last_digit - prints last digit
*@q:the parameter
*Return:Last digit
**/
int print_last_digit(int q)
{
	int last;

	if (q >= 0)
	{
		last = q % 10;
		_putchar (last + '0');
		return (last);
	}
	else
	{
		last = (q * -1) % 10;
		_putchar (last + '0');
		return (last);
	}
}
