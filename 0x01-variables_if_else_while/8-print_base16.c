#include <stdio.h>
#include <stdlib.h>
/**
* main-prints all the numbers of base 16 in lowercase
* Return:0 if code exits successfully
*/
int main(void)
{
	char c;
	int a;
	/* */
	a = 0;
	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
