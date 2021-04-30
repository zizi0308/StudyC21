#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;						// a,b초기화 total선언
	double avg;
	int* pa, * pb;									// int타입의 포인터 변수 2개 선언
	int* pt = &total;								// int형 변수인 total의 시작주소로 초기화
	double* pg = &avg;								// 변수의 타입을 맞춰야함
													// 포인터 변수의 실질적인 크기는 4byte이기 때문에 가리키는 자료형을 표시해 선언
	pa = &a;										// 주소를 집어넣음
	pb = &b;

	*pt = *pa + *pb;								// *가 가리키고 있는 주소에 데이터로 집어넣음
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", * pt);
	printf("두 정수의 평균 : %.1fl\n", *pg);

	return 0;
}