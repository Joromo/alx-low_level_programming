#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* *_calloc- locates memory for an array of nmemb elements of size
* @nmemb: array to allocate memory
* @size:size of elemnets
* Return:pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
