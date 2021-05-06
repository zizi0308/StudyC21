#include <stdio.h>

void print_total(int(*)[5]);				// 이차원배열의 값을 출력하는 함수 (배열 !포인터! 사용)
											//

int main(void)
{
	int score[4][5];						// 이차원배열
	int i, j;
	
	for (i = 0; i < 4; i++)					// main함수에 값을 입력받는다.(14장 exercise와 동일한 형태)
	{
		printf("5과목의 점수입력 : ");
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	print_total(score);						// 이차원 배열을 출력하는 print_total 함수 호출
	
	return 0;
}

void print_total(int (*ary)[5])				// 배열 포인터는 열값만 입력
{
	int i, j;								// for문 제어 변수
	int total;								// 점수의 합을 저장하는 변수
	double avg;								// 평균을 구하는 함수

	for ( i = 0; i < 4; i++)
	{
		total = 0;
		for ( j = 0; j < 5; j++)
		{
			total += ary[i][j];
		}
	}
	avg = total / 5.0;
	printf("총점 : %d, 평균 : %.1lf\n", total, avg);
}