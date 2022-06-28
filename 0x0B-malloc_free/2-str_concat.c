#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat- joins two strings together
* @s1: string one
* @s2: string two
* Return: concat string
*/
char *str_concat(char *s1, char *s2)
{
	char *q;
	int a, b, c, d;
	/* */
	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; a++)
		{
		}
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; b++)
		{
		}
	}
	c = a + b + 1;
	q = malloc(c * sizeof(char));
	if (q == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < a; d++)
		q[d] = s1[d];
	for (d = 0; d < b; d++)
		q[d] = s2[d];
	q[a + b] = '\0';
	return (q);
}
