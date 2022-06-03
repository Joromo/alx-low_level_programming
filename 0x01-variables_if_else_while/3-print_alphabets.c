#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints lowercase and Uppercase alphabet
* Return: 0 if execuded succesffuly
*/
int main(void)
{
	char U;
	char L;
	/* */
	for (U = 'A'; U <= 'Z'; U++)
	{
		for (L == 'a'; L <= 'z'; L++)
		{
			putchar(L);
		}
		putchar(U);
	}
	return (0);
}
