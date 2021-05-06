#include <stdio.h>

void func(int (*fp)(int, int));				// 함수포인터를 쓰는이유 함수자체를 매개변수로 받고 싶을 때
int sum(int a, int b);						// 동일한 함수를 여러개 구현했을 때 
int mul(int a, int b);						// 함수 포인터를 호출해서 사용하면 코드가 깔끔해진다.
int max(int a, int b);						// 실질적인 함수와 포인터로 쓰는 함수의 입출력 형태가 동일해야 함수포인터로 쓸 수 있다.

int main(void)
{
	int sel;								// 선택된 메뉴 번호를 저장할 변수 

	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum); break;			// 간단히 함수이름(함수도 포인터)을 매개변수로 사용하면 받는 쪽에서는 함수포인터를 사용해서 받아야 한다.
	case 2: func(mul); break;
	case 3: func(max); break;
	}

	return 0;
}

void func(int (*fp)(int, int))		// 함수를 호출하기위해 함수자체를 매개변수로 받고있음
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);					// 함수 포인터로 가리키는 함수 호출
	printf("결과값은 : %d\n", res);
}

int sum(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}