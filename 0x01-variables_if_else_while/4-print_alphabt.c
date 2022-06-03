#include <stdio.h>
#include <stdlib.h>
/**
* main - prints lowercase alpabet withou q and e
* Return:0 if code execute with no error
*/
int main(void)
{
	char c;
	/* */
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
