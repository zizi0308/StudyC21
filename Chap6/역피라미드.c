#include <stdio.h>

int main(void)
{
	int i, j, k;

	for ( i = 0; i < 10; i++)					// i = 0, 0 < 10
	{
		for ( j = 0; j < i; j++)				// j = 0, 0 < 0 (거짓)
		{
			printf(" ");						// 앞에 for문 실행X, 공백없음
		}
		for ( k = 10; k > i * 2 -1; k--)		// k = 10, 10 > 0 * 2 - 1 (-1) 
		{										// -1 부터 10까지 11자리
			printf("*");						// 별 11개
		}

		printf("\n");							// 개행
	}

	return 0;
}