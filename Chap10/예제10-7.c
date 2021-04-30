#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;									// �ִ��� ������ ����
	int size = sizeof(ary) / sizeof(ary[0]);	// �迭�� ��ҿ� ���� ���

	input_ary(ary, size);						// �迭�� �� �Է�
	max = find_max(ary, size);					// �迭�� �ִ� ��ȯ
	printf("�迭�� �ִ� : %.1fl\n", max);

	return 0;
}

void input_ary(double* pa, int size)			// double �����͸� �Ű������� ����(�迭�� �����ص� �Ǵµ� �����Ϸ��� �����ͷ� �ٲ�����ϱ� �׳� �����ͷ� ������ p289)
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for ( i = 0; i < size; i++)					// size�� ���� ���� �ݺ�Ƚ�� ����
	{
		scanf("%lf", pa + 1);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];								// ù��° �濡 �ִ� �����͸� max��� �������� 
	for (i = 1; i < size; i++)					// ��� ����� ��� ��
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;									// �ִ� ��ȯ

}