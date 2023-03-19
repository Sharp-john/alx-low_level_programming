#include <stdio.h>
/**
* main - prints the alphabet in lowercase
* Return:0
**/
int main(void)
{
	char alpha = 'a';
	int counter;

	for (counter = 0; counter < 26; counter++)
	{
		putchar(alpha);
		alpha = alpha + 1;
	}
putchar('\n');
return (0);
}
