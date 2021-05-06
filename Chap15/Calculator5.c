#include <stdio.h>

void calc(int (*fp)(int, int));
int sum(int a, int b);							
int sub(int a, int b);							
int mul(int a, int b);							
//double div(int a, int b);						

int main(void)									
{
	int a, b = 0;									
	int res = 0;								
	char op = "";									

		switch (op)
		{
		case '+':
			res = sum(a, b);
			printf("%d %c %d = %d", a, op, b, res);
			break;
		case '-':
			res = sub(a, b);
			printf("%d %c %d = %d", a, op, b, res);
			break;
		case '*':
			res = mul(a, b);
			printf("%d %c %d = %d", a, op, b, res);
			break;
		/*case '/':
			res = div(a, b);
			printf("%d %c %d = %.1lf", a, op, b, res);
			break;*/
		}

	return 0;									
}
void calc(int (*fp)(int, int))
{
	int a, b = 0;
	int res = 0;
	char op;

	printf("\n수식을 입력하세요 : ");
	scanf("%d %c %d", &a, &op, &b);
	res = fp(a, b);
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
//double div(int a, int b)
//{
//	if (b == 0)									
//	{
//		printf("값을 0으로 나눌 수 없습니다.");
//		return 0;
//	}
//	else
//	{
//		double res = (double)a / (double)b;		
//		return res;								
//	}
//}