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
	printf("Last digit of  %d is %d ", n, n % 10;);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n", n, n % 10;);
	}
	else if (n % 10 == 0)
	{
		printf("and is 0\n", n, n % 10;);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not 0\n", n, n % 10;);
	}
	else
	{
		return (0);
	}
}
