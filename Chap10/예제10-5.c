#include <stdio.h>

void print_ary(int* pa);					// 함수선언

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);							


	return 0;
}

void print_ary(int* pa)						// 선언되어있는 배열을 직접 건드릴 수 없기 때문에 
{											// 주소로 전달을 함
	int i;

	for ( i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
}
