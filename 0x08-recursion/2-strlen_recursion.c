#include "main.h"
/**
* _strlen_recursion - returns the length of a string.
* @s: The string
* Return 0: if successfull
*/
int _strlen_recursion(char *s)
{
	if (s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	_putchar(*s);
}
