#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
* print_numbers- prints numbers, followed by a new line.
* @separator: is the string to be printed between numbers
* @n: the number of integers passed to the function
* Return:Null
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lt;
	unsigned int i;
	int num;
	/* */
	va_start(lt, n);
	/* */
	for (i = 0; i < n; i++)
	{
		num += va_arg(lt, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%d ", separator);
	}
	printf("\n");
	va_end(lt);
}
/**
* main- our main function
* Return: 0 on succesful execution
*/
int main(void)
{
	int sum;
	/* */
	sum = sum_them_all(0, 98, 1024, 402, -1024);
	printf("%d ", sum);
	return (0);
}
