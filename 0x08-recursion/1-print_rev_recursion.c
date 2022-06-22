#include "main.h"
/**
* _print_rev_recursion- Prints string in reverse
* @s: string to be reversed
* Return Null
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1)
}