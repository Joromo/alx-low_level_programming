#include <ctype.h>
#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: test value
* Return: 1 if Alpha else 0
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
