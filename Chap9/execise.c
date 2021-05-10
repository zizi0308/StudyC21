#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;
	printf("�Ǽ��� 3�� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*minp < *midp) swap(minp, midp);	// swap(*minp, *midp) �ص� ū������ ��� �ȵǴ� ���� : ����ϴ� ����� �Լ��� ����� ȣ���� �Ѵٸ�
	if (*midp < *maxp) swap(midp, maxp);	// func(*p)�� func(p) �Ѵ� ����, ���ڴ� a�� ���� �Ѱ��ִ� �� ���ڴ� a�� �ּҰ��� �Ѱ��ִ� �� 
	if (*maxp < *minp) swap(maxp, minp);	// ���� ���� ����ϴ� ����� �Լ���� �� �� ��밡��, ������ swapó�� ���� ���� ��ȭ�� �ִ� �Լ����
}											// �ݵ�� �����͸� ���� ��� why? !*p�� ���� �μ��� ����ϸ� a���� ���纻�� �Ѿ�Ƿ� ���� a�� ��ȭX! 

// �� �����ڴ� �����Ͱ� ����Ű�� ���� ���ϴ� �����ڰ� �ƴ�, �����Ͱ� ����Ű�� ������ ����� �� �ְ� ���ִ� ������!!!

// line_up �Լ����� swap�Լ��� ȣ���� �� �ٲٰ��� �ϴ� ����� main �Լ��� max, mid, min�̹Ƿ� swap �Լ��� ȣ���� ���� ���� swap(&max, &mid); �� ���� ����ؾ� ��.
// ������ line_up �Լ����� main �Լ��� �̸��� max, mid, min�� ����� �� ������ ��� �� �ּҸ� ���� �ִ� maxp, midp, minp�� ����ϴ� ����
// ���� maxp, midp, minp�� ����� �� swap(maxp, midp); �� ���� �� ���� �״�� swap �Լ��� ��� ��.
// maxp�� midp�� �ٲٰ��� �ϴ� ����� max�� mid�� �ּҸ� ���� �ֱ� ����.