#include <stdio.h>

void add_ten(int *pa);

int main(void)
{
	int a = 10;

	add_ten(&a);				// 변수 a의 주소값을 받음
	printf("a : %d\n", a);		// 증가된 a값 출력

	return 0;
}

void add_ten(int* pa)
{
	*pa = *pa + 10;				// 포인터 pa가 가리키는 변수의 값 10 증가
}								// 복사와 달리 주소를 포인터로 직접 전달함