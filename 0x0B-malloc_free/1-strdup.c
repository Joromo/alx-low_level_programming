#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* *_strdup- returns a pointer to a newly allocated space in memory
* @str: string to be copied
* Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *a;
	int i, j;
	a = malloc(i * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		a[j] = str[j]
	}
	return (a);
}
