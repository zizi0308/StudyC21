#include <stdio.h>

void add_ten(int *pa);

int main(void)
{
	int a = 10;

	add_ten(&a);				// ���� a�� �ּҰ��� ����
	printf("a : %d\n", a);		// ������ a�� ���

	return 0;
}

void add_ten(int* pa)
{
	*pa = *pa + 10;				// ������ pa�� ����Ű�� ������ �� 10 ����
}								// ����� �޸� �ּҸ� �����ͷ� ���� ������