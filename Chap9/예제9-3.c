#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;						// a,b�ʱ�ȭ total����
	double avg;
	int* pa, * pb;									// intŸ���� ������ ���� 2�� ����
	int* pt = &total;								// int�� ������ total�� �����ּҷ� �ʱ�ȭ
	double* pg = &avg;								// ������ Ÿ���� �������
													// ������ ������ �������� ũ��� 4byte�̱� ������ ����Ű�� �ڷ����� ǥ���� ����
	pa = &a;										// �ּҸ� �������
	pb = &b;

	*pt = *pa + *pb;								// *�� ����Ű�� �ִ� �ּҿ� �����ͷ� �������
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", * pt);
	printf("�� ������ ��� : %.1fl\n", *pg);

	return 0;
}