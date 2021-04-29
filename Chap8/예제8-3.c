#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);	// sizeof(score[0])방하나의 크기를 나타냄 : int의 크기 = 4
												// sizeof(score) 방 전체의 크기를 나타냄 (20)
	for ( i = 0; i < count; i++)				// 왜 20 안씀? 나중에 바꿀때 수고를 덜기 위해서
	{
		scanf("%d", &score[i]);
	}

	for ( i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;				// count를 avg에 맞춰서 double로 변환 + 하나만 형변환해도
												// 나머지는 자동으로 바뀜
	for ( i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}