#include <stdio.h>
void input_data(int*, int*);
double average(int, int);

int main(void)
{
	int a, b;
	double avg;
	int total;

	input_data(&a, &b);
	average(a, b);

	printf("%d�� %d�� ��� : %.1lf", a, b, avg);

	return 0;
}

