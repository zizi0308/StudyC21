#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);	// sizeof(score[0])���ϳ��� ũ�⸦ ��Ÿ�� : int�� ũ�� = 4
												// sizeof(score) �� ��ü�� ũ�⸦ ��Ÿ�� (20)
	for ( i = 0; i < count; i++)				// �� 20 �Ⱦ�? ���߿� �ٲܶ� ���� ���� ���ؼ�
	{
		scanf("%d", &score[i]);
	}

	for ( i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;				// count�� avg�� ���缭 double�� ��ȯ + �ϳ��� ����ȯ�ص�
												// �������� �ڵ����� �ٲ�
	for ( i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}