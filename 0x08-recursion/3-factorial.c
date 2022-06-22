#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n : Number to check
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (1 + factorial(n + 1));
}
