#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n = 0;

	printf("몇 단의 구구단을 출력하시겠습니까? : ");
	scanf("%d", &n);
	
	for ( i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", n, i, (i*n));
	}
	return 0;
}