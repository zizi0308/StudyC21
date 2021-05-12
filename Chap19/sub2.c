#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_data(int *pa, int*pb)
{
	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", pa, pb);
}

double average(int a, int b)
{
	int tot;
	double avg;

	tot = (a + b);
	avg = tot / 2.0;

	return avg;
}