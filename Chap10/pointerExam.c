#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int* pa, int size);
void sawp_ary(int* pa, int* pb);
void print_ary(int* pa, int *pb);


int main(void)
{
	int ary1[10];
	int ary2[10];
	//int size = sizeof(ary1) / sizeof(ary1[0]);
	input_ary(ary1, 10);
	swap(ary1, ary2);
	print_ary(ary1, 10);
	printf("\n");
	print_ary(ary2, 10);
	return 0;
}

void input_ary(int* pa, int size)
{
	int i;

	printf("%d개의 정수값 입력 : ", size);

	for ( i = 0; i < size; i++)
	{
		scanf("%d", pa + 1);
	}
}

void sawp_ary(int* pa, int* pb)
{
	int* pa;
	int* pb;
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void print_ary(int* pa, int* pb)
{
	int i;

	for ( i = 0; i < 10; i++)
	{
		printf("%d %d", pa[i], pb[i]);
	}
}