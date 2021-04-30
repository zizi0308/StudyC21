#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a%d, b:%d\n", a, b);

	return 0;
}
void swap(int* pa, int* pb)			// 입력값을 받을 때는 포인터로 선언함(주소를 저장시킴)
{
	int temp;

	temp = *pa;						// 전달받은 주소값의 데이터를 건드림 데이터 값이므로 일반변수에 저장
	*pa = *pb;
	*pb = temp;
}