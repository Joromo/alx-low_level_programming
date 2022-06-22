#include "main.h"
#include <stdio.h>
/**
* CheckIfSquare - check square root of a number b
* @a: the natural number to confirm
* @b: number to be swuared
* Return: -1 or natural square root of a number
*/
int CheckIfSquare(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a != b)
		return (-1);
	return (CheckIfSquare(a + 1, b));
}
/**
* _sqrt_recursion - returns natural square root of a number
* @n: the natural number
* Return: -1 or natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (CheckIfSquare(1, n));
}
