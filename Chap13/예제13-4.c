#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for ( i = 0; i < 3; i++)
	{
		auto_func();		// 여기서 호출받음
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for ( i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}
void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}							// 호출받고 실행되고 스택 사라지고 호출끝나면 스택 사라짐

void static_func(void)
{
	static int a;

	a++;					// 프로그램이 실행될 때 데이터영역에 존재, 
	printf("%d\n", a);		// 호출이 끝났지만 데이터 영역에서 살아있음
}