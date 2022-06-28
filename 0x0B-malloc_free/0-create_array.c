#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* *create_array-creates an array of chars
* @size: size of array
* @c: The char to be initialised
* Return: NULL if size = 0 or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;
	/* */
	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c
	}
	return (s);
}
