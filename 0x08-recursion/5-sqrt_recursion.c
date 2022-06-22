#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion - returns natural square root of a number
* @n: the natural number
* Return: -1 or natural square root of a number
*/
int _sqrt_recursion(int n)
{
	int k = 0;
	/* */
	if (k * k == n)
		return (k);
	else if (k * k != n)
		return (-1);
	return (_sqrt_recursion(n));
}
