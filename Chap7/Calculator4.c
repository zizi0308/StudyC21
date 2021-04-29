#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_line(void);							// ���θ���� �Լ�
int sum(int a, int b);							// ���ϱ� �Լ�
int sub(int a, int b);							// ���� �Լ�
int mul(int a, int b);							// ���ϱ� �Լ�
double div(int a, int b);						// ������ �Լ� (������ �Ҽ��� �����ϱ� double��)

int main(void)									// �����Լ� ����
{
	int a, b;									// int�� ���� 2��
	double res = 0;								// res�� �ʱ�ȭ
	char op;									// �����ȣ

	while (1)									// while ���ѹݺ���
	{
		printf("\n������ �Է��ϼ��� : ");		// ó�� ����� ���
		scanf("%d %c %d", &a, &op, &b);			// ���� �� �Է�
		print_line();							// ���θ���� �Լ� main���� ����

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
	return 0;									// ����� �ִ� �Լ��� return���� �־�� ��
}

int sum(int a, int b)							// int�� ��� sum�� �Ű����� int a, int b
{
	int res = a + b;							// �������� ������ ����
	
	return res;									// ���������� ����� �ִ� �Լ��� return���� �־�� ��
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
	if (b == 0)									// ������ ����ó��
	{
		printf("���� 0���� ���� �� �����ϴ�.");
		return 0;
	}
	else
	{
		double res = (double)a / (double)b;		// int���� a, b�� �Ҽ������� ��ȯ�ϱ� ���� 
		return res;								// double�� ����ȯ ��
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



