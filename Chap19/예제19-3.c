#include <stdio.h>
#define		SUM(a, b)	(a + b)			// 두 값을 더하는 매크로 함수
#define		MUL(a, b)	((a) * (b))		// 두 값을 곱하는 매크로 함수
#define		TEST(a)		((a) * (10))	// 각각 인수별로 괄호를 꼭!! 쳐야 계산이 정확하게 나온다

int main(void)
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));	// a와 b의 합
	printf("x + y = %d\n", SUM(x, y));
	printf("%d\n", TEST(a + 10));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);


	return 0;
}