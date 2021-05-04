#include <stdio.h>

int main(void)
{
	register int i;					// 레지스터 변수
	auto int sum = 0;

	for ( i = 0; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}