#include < stdio.h >
/**
* main-prints the alphabet in lowercase, and then in uppercase
* return:0
**/
int main(void)
{
	char alpha = 'a';
	char Alpha = 'A';
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar (alpha);
		putchar (Alpha);
		Alpha = Alpha + 1;
		alpha = alpha + 1;
	}
putchar ('\n');
return (0);
}
