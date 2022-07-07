#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all-  that returns the sum of all its parameters
* @n:constant interger that will be added to other
* Return: 0 if If n == 0, else return sum of all int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list lt;
	unsigned int i, sum;
	sum = 0;
	/* */
	va_start(lt, n);
	/* */
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lt, int);
	}
	va_end(lt);
	return (sum);
}
