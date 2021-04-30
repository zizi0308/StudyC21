#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;					// 데이터에 접근하면 문제가 생김
	printf("%lf\n", *pd);

	return 0;
}