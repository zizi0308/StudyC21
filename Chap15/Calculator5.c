#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);							
int sub(int a, int b);							
int mul(int a, int b);							

int main(void)									
{
	char op = "";

	printf("'+' �� ������ ��\n");
	printf("'-' �� ������ ��\n");
	printf("'*' �� ������ ��\n");
	printf("���ϴ� ������ �����ϼ��� : ");
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
	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("������� : %d\n", res);
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
