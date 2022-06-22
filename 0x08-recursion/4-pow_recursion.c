#include "main.h"
#include <stdio.h>
/**
* _pow_recursion- return value of x raised to the power of y
* @x: the base interger
* @y: the Exponetial value
* Return: the value of x ^ y or -1 if y > 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
