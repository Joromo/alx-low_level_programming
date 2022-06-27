#include <ctype.h>
#include "main.h"
#include <stdlib.h>
/**
* _abs - computes the absolute value of an integer
* @x: value to convert to an absolute value
* Return: absolute value of x
*/
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
	return (0);
}
