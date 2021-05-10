#include <stdio.h>

void print_month(int* mp);

int main(void)
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	print_month(month);
	printf("%p", month);
	return 0;
}

void print_month(int* mp)
{
	int i;
	for ( i = 1; i <= 12; i++)
	{
		printf("%5d", mp[i-1] );
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
}