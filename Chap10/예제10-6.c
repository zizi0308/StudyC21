#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, 5);					// ary1 �迭 ���, �迭����� ���� ����
	printf("\n");
	print_ary(ary2, 7);					// ary2 �迭 ���, �迭����� ���� ����

	return 0;
}

void print_ary(int* pa, int size)		// �迭��� �迭����� �Ű������� �޴� �Ű����� ����
{
	int i;

	for ( i = 0; i < size; i++)			// size�� ���� ���� �ݺ�Ƚ�� ����
	{
		printf("%d ", pa[i]);
	}
}