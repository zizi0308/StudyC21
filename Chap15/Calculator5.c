#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);							
int sub(int a, int b);							
int mul(int a, int b);							

int main(void)									
{
	char op = "";

	printf("'+' 두 정수의 합\n");
	printf("'-' 두 정수의 차\n");
	printf("'*' 두 정수의 곱\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%c", &op);

		switch (op)
		{
		case '+': func(sum); break;
		case '-': func(sub); break;
		case '*': func(mul); break;
		}

	return 0;									
}
void func(int (*fp)(int, int))
{
	int res;
	int a, b;
	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과값은 : %d\n", res);
}


int sum(int a, int b)							
{
	return (a + b);							
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
