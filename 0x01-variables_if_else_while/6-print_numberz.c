#include <stdio.h>
/**
*main - prints 9-o
*Return:0
**/
int main(void)
{
	int x;

	for (x = 9; x >= 0; x--)
	{
		putchar ('0' + x);
	}
putchar ('\n');
return (0);
}
