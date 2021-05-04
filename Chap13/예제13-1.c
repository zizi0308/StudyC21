#include <stdio.h>

void assign(void);						// 함수선언

int main(void)
{
	auto int a = 0;						// 지역 변수 선언과 초기화, 스택에 a영역 할당

	assign();							// 함수호출
	printf("main함수 a : %d\n", a);

	return 0;
}	// main은 프로그램이 종료되면 메모리가 사라짐

void assign(void)
{
	int a;								// main과 같은 이름의 지역변수

	a = 10;								// assign함수 안에 선언된 a에 대입
	printf("assign 함수 a : %d\n", a);
}	// 함수의 실행이 끝나버리면 스택영역에서 메모리가 없어져버림(지역변수의 특성)