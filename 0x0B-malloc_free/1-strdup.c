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
	unsigned int i, j;
	/* */
	if (str == NULL)
		return (NULL);
	for (i  = 0; str[i]; i++)/* hether element is or not null, in order to stop the loop*/
	{
	}
	i++;
	a = malloc(i * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
