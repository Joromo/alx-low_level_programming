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
	/*         */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int n1;
	/*         */
	n1 = n % 10;
	/*         */
	if (n1 > 5)
	{
		printf("Last digit of  %d is %d and is greater than 5\n", n, n1);
	}
	else if (n1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n1);
	}
	else if (n1 < 6 && n1 != 0)
	{
		printf("Last digit of %d is  %d and is less than 6 and not 0\n", n, n1);
	}
	else
	{
		return (0);
	}
}
