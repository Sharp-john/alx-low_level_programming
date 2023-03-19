#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*Return 0
*/ 
int main ()
{
	char alpha = 'a';
	int counter;
	
	for (counter = 0; counter < 27; counter ++)
	{
		putchar(alpha);
		putchar('\n);
		alpha++;
	}
return 0;
}
