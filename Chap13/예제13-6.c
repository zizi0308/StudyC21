#include <stdio.h>

void add_ten(int a);

int main(void)
{
	int a = 10;					// ���ο���

	add_ten(a);					// a���� �����Ͽ� ����(���� �����ϴ� ���´� ���� ������ �� ����)
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
}