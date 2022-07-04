#include <stdio.h>
int main(void)
{
	/*int array[10];
	int i , j;
	/*elemnt of array initialized to 0
	for (i=0; i<=10; i++)
	{
		array[i]=i;
	}
	/* array is outputed
	for (j=0; j<10; j++)
	{
		printf("Element[%d] = %d \n", j, array[j]);
	
	}*/
	
	/* Multidimensional array */
	int table[3][4]={1,2,3,4,4,3,2,1,7,8,9,2};
	int i, j, k;
	/* initialized */
	for (i=0;i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			for (k=0;k<4;k++)
			{
				printf("table[%d][%d][%d] = %d \n",i,j,k, table[i][j]);
			}
		}
	}
}
