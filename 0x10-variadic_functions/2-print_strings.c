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
	char *string;
	va_list string1;
	/* */
	va_start(string1, n);
	for (i = 0; i < n; i++)
	{
		string = va_args(string1, char *);
		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(string1);
}
