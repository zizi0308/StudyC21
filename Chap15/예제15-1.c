#include <stdio.h>

int main(void)
{
	int a = 10;
	int* pi;
	int** ppi;		// 선언문은 포인터 선언

	pi = &a;
	ppi = &pi;		// 포인터변수의 주소값을 저장할 수 있음 (pi가 저장하고 있는 주소값 = &a의 주소 )

	printf("------------------------------------------\n");
	printf("변수    변숫값    &연산    *연산    **연산\n");
	printf("------------------------------------------\n");
	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi); // 실행문에 있는 *은 간접참조연산자


	return 0;
}