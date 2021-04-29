/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	int sum, sub, mul, div;
	char op;
	char ex = 'y';

	

	while (1)
	{
		printf("수식을 입력하세요 : ");
		scanf("%d %c %d", &a, &op, &b);
		
		if (op == 'y') break;

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
		getchar();
		printf("\n");
		printf("계산기를 종료하시겠습니까? : (y/n)\n");
		scanf("%c", &ex);
		if (ex == 'y')
		{
			exit(0);
		}
	}
	
	return 0;
}*/