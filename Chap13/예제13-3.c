#include <stdio.h>

void assign10(void);
void assign20(void);

int a;										// 전역변수 선언 컴파일러가 
											// 전역변수는 무조건 0으로 초기화 시켜줌
int main(void)
{
	printf("함수 호출 전 a 값 : %d\n", a);	// 전역 변수 a 출력

	assign10();								// 전역변수를 10으로 바꿈
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);	// 전역 변수 a 출력

	return 0;
}
void assign10(void)
{
	a = 10;									// 전역 변수 a에 10 대입 
}
void assign20(void)							
{
	int a;									// 전역 변수와 같은 이름의 지역 변수선언

	a = 20;									// 지역변수 a에 20대입
}
