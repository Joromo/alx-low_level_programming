#include <ctype.h>
#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: define the number
* Return: 1, 0 and -1 if conditons are met
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
		_putchar('\n');
	}
}
