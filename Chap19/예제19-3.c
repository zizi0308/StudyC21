#include <stdio.h>
#define		SUM(a, b)	(a + b)			// �� ���� ���ϴ� ��ũ�� �Լ�
#define		MUL(a, b)	((a) * (b))		// �� ���� ���ϴ� ��ũ�� �Լ�
#define		TEST(a)		((a) * (10))	// ���� �μ����� ��ȣ�� ��!! �ľ� ����� ��Ȯ�ϰ� ���´�

int main(void)
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));	// a�� b�� ��
	printf("x + y = %d\n", SUM(x, y));
	printf("%d\n", TEST(a + 10));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);


	return 0;
}