#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion - returns natural square root of a number
* @n: the natural number
* Return: -1 or natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n % 2 == 0)
	{
		return (_sqrt_recursion(n + 1));
	}
	if (n % 2 != 0)
		return (-1);
	return (1);
}
