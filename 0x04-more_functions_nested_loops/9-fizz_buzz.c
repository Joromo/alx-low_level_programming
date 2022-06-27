#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main- prints numbers 1 to 100. 3=FIZZ, 5-BUZZ bot fizzbuzz
* Return: NUll
*/
int main(void)
{
	int i;
	/* */
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (1 < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
