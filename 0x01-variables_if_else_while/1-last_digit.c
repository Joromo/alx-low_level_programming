#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* This program assigns random number to variable n each time its executed */

/**
* main - print the last digit of the number stored in the variable n
* Return:0 if executed succesfuly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of "n" is  %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of "n" is  %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of "n" is  %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
