#include <stdio.h>
/**
* main - prints the alphabet in lowercase and in reverse
* Return:0
**/
int main(void)
{
	char alpha = 'z';
	int counter;

	for (counter = 26; counter >= 0; counter--)
	{
		putchar(alpha);
		alpha = alpha - 1;
	}
putchar('\n');
return (0);
}
