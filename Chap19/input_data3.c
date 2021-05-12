#include <stdio.h>

extern int count;				// main에 있는 count를 쓰겠다.
int total = 0;					// 여기에 초기화 되어있음(전역변수가 초기화 되어있는 위치가 원본의 위치)

int input_data(void)
{
	int pas;

	while (1)
	{
		printf("양수입력 : ");
		scanf("%d", &pas);
		if (pas < 0) break;
		count++;
		total += pas;
	}

	return total;
}