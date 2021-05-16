#include <stdio.h>

void print_total(int(*)[4]);				// 이차원배열의 값을 출력하는 함수 (배열 !포인터! 사용)
void print_std_total(int(*)[4]);
void print_subj_total(int(*)[4]);


int main(void)
{
	int score[5][4];						// 이차원배열
	int i, j;
	
	for (i = 0; i < 5; i++)					// main함수에 값을 입력받는다.(14장 exercise와 동일한 형태)
	{
		printf("4과목의 점수입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	print_total(score);						// 이차원 배열을 출력하는 print_total 함수 호출
	print_std_total(score);
	print_subj_total(score);
	return 0;
}

void print_total(int (*ary)[4])				// 배열 포인터는 열값만 입력
{
	int i, j;								// for문 제어 변수
	int total;								// 점수의 합을 저장하는 변수
	double avg;								// 평균을 구하는 함수

	for ( i = 0; i < 5; i++)
	{
		total = 0;
		for ( j = 0; j < 4; j++)
		{
			total += ary[i][j];
		}
	}
	avg = total / 5.0;
	printf("총점 : %d, 평균 : %.1lf\n", total, avg);
}

void print_std_total(int (*std_ary)[4])
{
	int i, j;
	int std_tot;
	double std_avg;

	for (i = 0; i < 5; i++)			// 학생별 평균 구하기
	{
		printf("<%d번 학생>\n", i + 1);
		std_tot = 0;
		for (j = 0; j < 4; j++)
		{
			std_tot += std_ary[i][j];
		}
		std_avg = std_tot / 4.0;		// 학생 4명
		printf("평균 : %.1lf\n", std_avg);
	}
}
void print_subj_total(int(*subj_ary)[4])
{
	int i, j;
	int subj_tot;
	double subj_avg;

	for (j = 0; j < 4; j++)			// 과목별 평균 구하기
	{
		printf("<%d번째 과목>\n", j + 1);
		subj_tot = 0;
		for (i = 0; i < 5; i++)
		{
			subj_tot += subj_ary[i][j];
		}
		subj_avg = subj_tot / 5.0;		// 5과목
		printf("평균 : %.1lf\n", subj_avg);
	}
	printf("\n");
}