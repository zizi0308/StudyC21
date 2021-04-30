#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;					 
	// 포인터변수 pa를 통해서 데이터를 건드리지말라(포인터가 가르키는 데이터를 상수화)
	// 주소값은 바꿀 수 있지만 데이터 값은 바꿀 수 없다
	int* const  pb = &b;
	// 포인터 자체가 상수화(포인터의 주소값이 상수화) 데이터 값은 바꿀 수 있지만 주소값은 바꿀 수 없다.
	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	return 0;
}