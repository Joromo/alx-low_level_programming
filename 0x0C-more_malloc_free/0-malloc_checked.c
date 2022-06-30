#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* *malloc_checked- allocates memory using
* @b: int to be checked
* Return: NULl
*/
void *malloc_checked(unsigned int b)
{
	void *a;
	/* */
	a = malloc(sizeof(b));
	if (a == NULL)
	{
		return (98);
	}
	return (a);
}
