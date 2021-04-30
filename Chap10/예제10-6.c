#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, 5);					// ary1 배열 출력, 배열요소의 개수 전달
	printf("\n");
	print_ary(ary2, 7);					// ary2 배열 출력, 배열요소의 개수 전달

	return 0;
}

void print_ary(int* pa, int size)		// 배열명과 배열요소의 매개변수를 받는 매개변수 선언
{
	int i;

	for ( i = 0; i < size; i++)			// size의 값에 따라 반복횟수 결정
	{
		printf("%d ", pa[i]);
	}
}