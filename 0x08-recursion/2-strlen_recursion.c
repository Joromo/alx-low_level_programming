#include "main.h"
/**
* _strlen_recursion - gives back length of a string.
* @s: The string
* Return: String Lenght
*/
int _strlen_recursion(char *s)
{
	if (s == '\0')
	{
		return (0);
		return (1 + _strlen_recursion(s + 1));
	}
	_putchar(*s);
}
