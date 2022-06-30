#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* *array_range - prints buffer in hexa
* @min: the address of memory to print
* @max: the size of the memory to print
* Return:the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
