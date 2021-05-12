#include <stdio.h>

int input_data(void);
double average(void);
void print_data(double);

int count = 0;						// 전역변수가 초기화가 되어있는 위치가 원본이 있는 위치이다.
static int total = 0;				// 다른파일에서 total을 쓰지마라

int main(void)
{
	double avg;

	total = input_data();
	avg = average();
	print_data(avg);

	return 0;
}

void print_data(double avg)
{
	printf(" 입력한 양수의 개수 : %d\n", count);
	printf(" 전체의 합과 평균 : %d, %.1lf\n", total, avg);
}