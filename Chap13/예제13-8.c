#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int* resp;								// 포인터 변수선언

	resp = sum(10, 20);						// 포인터 함수의 원형을 받아들이는 코드
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
}

int* sum(int a, int b)
{
	int res;								// static으로 선언된 res
	res = a + b;							

	return &res;							// res의 주소값을 전달(데이터 영역에 있는 주소값을 전달)
}