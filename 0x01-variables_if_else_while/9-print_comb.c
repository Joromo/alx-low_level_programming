#include <stdio.h>
#include <stdlib.h>
/**
* main-prints all possible combinations of single-digit numbers.
* Return:0 if code exits successfully
*/
int main(void)
{
	int a;
	/* */
	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		putchar(',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
