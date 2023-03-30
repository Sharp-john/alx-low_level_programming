#include "main.h"
#include <string.h>
/**
*print_rev - print in reverse oder
*@s:char type
**/
void print_rev(char *s)
{
	int l = strlen(s);
	int x;

	for (x = l ; x >= 0 ; x--)
	_putchar (s[x]);
_putchar('\n');
}
