#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* *malloc_checked- allocates memory using
* @b: memmory to allocate
* Return: 98 if null  and return pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	void *a;
	/* */
	a = malloc(b);
	if (a == NULL)
	{
		return (98);
	}
	return (a);
	free(a);
}
