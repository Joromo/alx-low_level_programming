#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *string_nconcat-concatenates two strings.
* @s1: string one
* @s2: string two
* @n: no of bytes of string to to be copied
* Return: Null if Empty else retuen s1+s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *p;
	/* */
	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
		{
		}
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
		{
		}
	}
	if (b > n)
		b = n;
	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		p[c] = s1[c];
	for (c = 0; c < b; c++)
		p[c + a] = s2[c]
	p[a + b] = '\0';
	return (p);
}
