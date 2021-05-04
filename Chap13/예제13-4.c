#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for ( i = 0; i < 3; i++)
	{
		auto_func();		// ���⼭ ȣ�����
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for ( i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}
void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}							// ȣ��ް� ����ǰ� ���� ������� ȣ�ⳡ���� ���� �����

void static_func(void)
{
	static int a;

	a++;					// ���α׷��� ����� �� �����Ϳ����� ����, 
	printf("%d\n", a);		// ȣ���� �������� ������ �������� �������
}