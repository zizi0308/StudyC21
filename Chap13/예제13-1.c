#include <stdio.h>

void assign(void);						// �Լ�����

int main(void)
{
	auto int a = 0;						// ���� ���� ����� �ʱ�ȭ, ���ÿ� a���� �Ҵ�

	assign();							// �Լ�ȣ��
	printf("main�Լ� a : %d\n", a);

	return 0;
}	// main�� ���α׷��� ����Ǹ� �޸𸮰� �����

void assign(void)
{
	int a;								// main�� ���� �̸��� ��������

	a = 10;								// assign�Լ� �ȿ� ����� a�� ����
	printf("assign �Լ� a : %d\n", a);
}	// �Լ��� ������ ���������� ���ÿ������� �޸𸮰� ����������(���������� Ư��)