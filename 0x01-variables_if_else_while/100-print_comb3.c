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
	for (a = 0; a <= 8; a++)
	{
		for (j = 1; j <= 9; ++j)
		{
			if (j > a)
			{
				putchar('0' + a);
				putchar('0' + j);
				if (j != 9 || a != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
