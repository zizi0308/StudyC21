#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int* pa, int size);
void swap_ary(int *pa, int size);
void print_ary(int* pa, int size);


int main(void)
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);		// 10��
	input_ary(ary, size);
	swap_ary(ary, size);
	print_ary(ary, size);
	printf("\n");
	return 0;
}

void input_ary(int* pa, int size)
{
	int i;

	printf("%d���� ������ �Է� : ", size);

	for ( i = 0; i < size; i++)
	{
		scanf("%d", &pa[i]);  // ������ �޾ƾ� �ϴϱ� scanf
	}
}

void swap_ary(int* pa, int size)
{
	int temp;
	int i;
	int j;

	for (i = 0; i < size / 2; i++)
	{
		j = size - i - 1;
		temp = pa[i];
		pa[i] = pa[j];
		pa[j] = temp;
	}
}
void print_ary(int* pa, int size)
{
	int i;
	
	for ( i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}