#include <stdio.h>

int sum(int, int);						// �Լ����� �Է°� ���(�����Ϳ� �Լ�)�� ���ƾ� ��(line 7�� ������ Ÿ���� ���ƾ� ��)
										
int main(void)
{
	int (*fp)(int, int);				// �Է�,����ְ� �Լ��̸� ��� �����ͷ�!
	int res;

	fp = sum;							// �Լ����� �Լ� �����Ϳ� ����
	res = fp(10, 20);					// �Լ� �����ͷ� �Լ��� ȣ��
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}