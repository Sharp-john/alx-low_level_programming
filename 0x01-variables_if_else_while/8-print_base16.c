#include <stdio.h>
/**
*main-hexadecimal
*Return:0
**/
int main(void)
{
	char x;
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar('0' + y);
	}
	for (x = 'a' ; x < 'g' ; x++)
	{
		putchar(x);
	}
putchar('\n');
return (0);
}
