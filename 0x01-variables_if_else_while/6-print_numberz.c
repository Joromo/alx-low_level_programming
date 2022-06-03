#include <stdio.h>
#include <stdlib.h>
/**
* main-print
* Return: 0 if code is executed correctly
*/
int main(void)
{
	int a;
	/* */
	a = 0;
	/* */
	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
