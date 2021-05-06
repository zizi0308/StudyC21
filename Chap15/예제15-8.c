#include <stdio.h>

void func(int (*fp)(int, int));				// �Լ������͸� �������� �Լ���ü�� �Ű������� �ް� ���� ��
int sum(int a, int b);						// ������ �Լ��� ������ �������� �� 
int mul(int a, int b);						// �Լ� �����͸� ȣ���ؼ� ����ϸ� �ڵ尡 ���������.
int max(int a, int b);						// �������� �Լ��� �����ͷ� ���� �Լ��� ����� ���°� �����ؾ� �Լ������ͷ� �� �� �ִ�.

int main(void)
{
	int sel;								// ���õ� �޴� ��ȣ�� ������ ���� 

	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum); break;			// ������ �Լ��̸�(�Լ��� ������)�� �Ű������� ����ϸ� �޴� �ʿ����� �Լ������͸� ����ؼ� �޾ƾ� �Ѵ�.
	case 2: func(mul); break;
	case 3: func(max); break;
	}

	return 0;
}

void func(int (*fp)(int, int))		// �Լ��� ȣ���ϱ����� �Լ���ü�� �Ű������� �ް�����
{
	int a, b;
	int res;

	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);					// �Լ� �����ͷ� ����Ű�� �Լ� ȣ��
	printf("������� : %d\n", res);
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