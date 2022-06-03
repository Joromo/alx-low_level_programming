#include <stdio.h>
#include <stdlib.h>
/**
* main-prints the lowercase alphabet in reverse
* Return:0 if executed successfully
*/
int main(void)
{
	char c;
	/* */
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
