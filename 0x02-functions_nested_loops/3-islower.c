#include "main.h"
#include <ctype.h>
/**
 * _islower - check the code for lowercase character.
 * @c: value to test whether it is a lowercase letter.
 * Return: 1 if islower or 0 if not.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
