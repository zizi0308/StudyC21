#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	char op;
	int sum, sub, mul, div;


	printf("������ �Է��ϼ��� : ");
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
		printf("�߸��� �Է��Դϴ�. �ٽ� �ѹ� Ȯ�����ּ���");
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
