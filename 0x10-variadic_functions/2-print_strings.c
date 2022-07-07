#include<stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
/**
* print_strings- prints strings, followed by a new line
* @separotor:  string to be printed between the strings
* @n:number of strings passed to the function
* Return:null
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *stri;
	va_list string;
	/* */
	va_start(string1, n);
	for (i = 0; i < n; i++)
	{
		stri = va_arg(string, char *);
		if (stri)
		{
			printf("%s", stri);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
