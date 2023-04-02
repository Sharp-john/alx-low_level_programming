#include "main.h"
#include <ctype.h>
/**
*int _isalpha - distigish between c and int _isalpha
*@c:char type
**/
int _isalpha(int c)
{
	if ((isalpha(c) == 1) ) 
	{
		return (1);
	}
	else
		return (0);
}
