#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int* resp;								// ������ ��������

	resp = sum(10, 20);						// ������ �Լ��� ������ �޾Ƶ��̴� �ڵ�
	printf("�� ������ �� : %d\n", *resp);

	return 0;
}

int* sum(int a, int b)
{
	int res;								// static���� ����� res
	res = a + b;							

	return &res;							// res�� �ּҰ��� ����(������ ������ �ִ� �ּҰ��� ����)
}