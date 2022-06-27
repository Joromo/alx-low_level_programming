#include "main.h"
/**
* _isdigit- check if number is digit
* @c: digit to be checked
* Return: 1if digit else 0
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
