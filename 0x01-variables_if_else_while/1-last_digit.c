#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n ;
	int last_num ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    	last_num = n % 10 ;
	if (n > 5)
	{
	    printf("last of %d is %d and  is grater than 5" ,n,last_num);
	}
	else if ( n == 0)
	{
	    printf("last digit of %d is %d and is 0" ,n,last_num);
	}
	else if (n < 6 && n != 0)
	{
	    printf("Last digit of %d is %d and is less than 6 and not 0");
	}
	return (0);
}
