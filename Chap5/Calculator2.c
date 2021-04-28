#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	char op;
	int sum, sub, mul, div;


	printf("수식을 입력하세요 : ");
	scanf("%d %c %d", &a, &op, &b);

	/*
	int a, b;
	char op;
	
	if (op == '+')
	{
		printf("%d %c %d = %d", a, op, b, a + b);
	}
	else if (op == '-')
	{
		printf("%d %c %d = %d", a, op, b, a - b);
	}
	else if (op == '*')
	{
		printf("%d %c %d = %d", a, op, b, a * b);
	}
	else if (op == '/')
	{
		printf("%d %c %d = %d", a, op, b, a / b);
	}
	else
	{
		printf("잘못된 입력입니다. 다시 한번 확인해주세요");
	}*/

	switch (op)
	{
	case '+':
		sum = a + b;
		printf("%d %c %d = %d", a, op, b, sum);
		break;
	case '-':
		sub = a - b;
		printf("%d %c %d = %d", a, op, b, sub);
		break;
	case '*':
		mul = a * b;
		printf("%d %c %d = %d", a, op, b, mul);
		break;
	case '/':
		div = a / b;
		printf("%d %c %d = %d", a, op, b, div);
		break;
	}

	return 0;

}
