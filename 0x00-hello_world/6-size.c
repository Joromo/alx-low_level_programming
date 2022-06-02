#include <stdio.h>
/**
* main - declare char,int,long int,long long int and float and print the size of each
* Return:0 if exit successfuly esle return null
*/
int main(void)
{
	char ctype;
	int itype;
	long int litype;
	long long int llitype;
	float ftype;
	printf("Size of a char: %zu byte(s)\n", sizeof(ctype));
	printf("Size of a int: %zu byte(s)\n", sizeof(itype));
	printf("Size of a long int: %zu byte(s)\n", sizeof(litype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llitype));
	printf("Size of a float: %zu byte(s)\n", sizeof(ftype));
	return (0);
}
