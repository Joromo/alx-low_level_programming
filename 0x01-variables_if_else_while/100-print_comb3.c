#include <stdio.h>
#include <stdlib.h>
/**
* main- prints  all possible different combinations of two digits
* Return:0 if code executes successfully
*/
int main(void)
{
	int a;
	int j;
	/* */
	for (a = 0; a < 10; a++)
	{
		for (j = 0; j < a; j++)
		{
			putchar('0' + j);
			putchar('0' + a);
			if (j != 8 || a != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
