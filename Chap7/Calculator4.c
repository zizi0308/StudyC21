#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_line(void);							// 라인만드는 함수
int sum(int a, int b);							// 더하기 함수
int sub(int a, int b);							// 빼기 함수
int mul(int a, int b);							// 곱하기 함수
double div(int a, int b);						// 나누기 함수 (나눌때 소수점 나오니까 double로)

int main(void)									// 메인함수 시작
{
	int a, b;									// int형 변수 2개
	double res = 0;								// res값 초기화
	char op;									// 연산부호

	while (1)									// while 무한반복문
	{
		printf("\n수식을 입력하세요 : ");		// 처음 실행시 출력
		scanf("%d %c %d", &a, &op, &b);			// 연산 값 입력
		print_line();							// 라인만드는 함수 main에서 실행

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
		case '/':
			res = div(a, b);
			printf("%d %c %d = %.1lf", a, op, b, res);
			break;
		}
		
	}
	return 0;									// 출력이 있는 함수는 return값이 있어야 함
}

int sum(int a, int b)							// int로 출력 sum의 매개변수 int a, int b
{
	int res = a + b;							// 연산결과를 저장할 변수
	
	return res;									// 마찬가지로 출력이 있는 함수는 return값이 있어야 함
}
int sub(int a, int b)
{
	int res = a - b;

	return res;
}
int mul(int a, int b)
{
	int res = a * b;

	return res;
}
double div(int a, int b)
{
	if (b == 0)									// 나누기 예외처리
	{
		printf("값을 0으로 나눌 수 없습니다.");
		return 0;
	}
	else
	{
		double res = (double)a / (double)b;		// int형인 a, b를 소수점으로 변환하기 위해 
		return res;								// double로 형변환 함
	}
}
void print_line(void)
{
	int i;

	for (i = 0; i < 65; i++)
	{
		printf("-");
	}
	printf("\n");
}



