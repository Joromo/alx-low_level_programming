#include <stdio.h>
#include <stdlib.h>
/**
*main- Prints alphabet in lower case
*Return: 0 if execudede succesfully
*/
int main(void)
{
	char c;
	/* */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
