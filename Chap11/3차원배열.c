#include <stdio.h>

void main(void)
{
	int array[2][3][4];
	int i, j, k, value = 1;
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			for ( k = 0; k < 4; k++)
			{
				array[i][j][k] = value;				// value를 1부터 집어넣고 있음
				printf("\n array[%d][%d][%d] = %d", i, j, k, value);
				value++;
			}
		}
	}
	getchar();

}