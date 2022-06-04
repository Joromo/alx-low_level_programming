#include <stdio.h>
#include <stdlib.h>
/**
* main- prints  all possible different combinations of three digits
* Return:0 if code executes successfully
*/
int main(void)
{
	int a;
	int j;
	int k;
	/* */
	for (a = 0; a < 8; a++)
	{
		for (j = 1; j < 9; ++j)
		{
			for (k = 2; k < 10; k++)
			{
				if (k > j || j > a)
				{
					putchar('0' + a);
					putchar('0' + j);
					putchar('0' + k);
					if (a != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
