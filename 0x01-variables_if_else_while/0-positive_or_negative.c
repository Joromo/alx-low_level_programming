#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* This program assigns a random number to variable n each time its executed.*/

/**
* main - prints if number stored in the variable n is positive or negative
* Return:0 when succesfull
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
