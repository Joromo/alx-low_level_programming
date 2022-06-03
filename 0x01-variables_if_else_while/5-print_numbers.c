#include <stdio.h>
#include <stdlib.h>
/**
* main-prints all single digit numbers of base 10 starting from 0
* Return:0 if executed succesfully
*/
int main(void)
{
	int a;
	/* */
	a = 0;
	/* */
	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
