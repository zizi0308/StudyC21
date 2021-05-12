#include <stdio.h>
// 학생별 평균, 과목별 평균 구하는것도 만들어보기 15장 exe에도 적용해서 함수로 만들어 빼기
int main(void)
{
	int score[5][4];					// 5명 4과목 (다차원 배열에서 중요한 것은 열!이다.)
	int total;							// 합계를 저장하기 위한 변수
	double avg;							// 평균을 저장하기 위한 변수
	int std_tot;
	double std_avg;						// 학생별 평균을 저장하기 위한 변수
	int subj_tot;
	double subj_avg;					// 과목별 평균을 저장하기 위한 변수
	int i, j;							// 반복 제어 변수(i는 과목 j는 사람)

	for ( i = 0; i < 5; i++)			// i가 5전 까지 4개 요소를 입력해야 하는데(4과목의 점수)
	{
		printf("4과목의 점수입력 : ");	
		for ( j = 0; j < 4; j++)		// 5전 까지의 열에 4개의 요소를 입력 받아야 한다.(5명의 학생)
		{
			scanf("%d", &score[i][j]);	// 행과 열을 입력한다
		}
	}
	
	for (i = 0; i < 5; i++)				// i가 < 5까지 요소들을 출력해야 하는데
	{
		total = 0;						// total변수를 사용하기 전에 초기화 해야한다(아니면 결과 이상함)
		for ( j = 0; j < 4; j++)		// 4개의 열에 5개의 요소를 출력한다.
		{
			total += score[i][j];		// total변수를 사용한다.(모든 행과 열의 값을 더한다)
		}
	}

	for ( i = 0; i < 5; i++)			// 학생별 평균 구하기
	{
		printf("<%d번 학생>\n", i + 1);
		std_tot = 0;
		for ( j = 0; j < 4; j++)
		{
			std_tot += score[i][j];
		}
		std_avg = std_tot / 4.0;		// 학생 4명
		printf("평균 : %.1lf\n", std_avg);
	}
	printf("\n");

	for ( j = 0; j < 4; j++)			// 과목별 평균 구하기
	{
		printf("<%d번째 과목>\n", j + 1);
		subj_tot = 0;
		for ( i = 0; i < 5; i++)
		{
			subj_tot += score[i][j];
		}
		subj_avg = subj_tot / 5.0;		// 5과목
		printf("평균 : %.1lf\n", subj_avg);
	}
	
	printf("\n");
	avg = total / 4.0;					
	// avg변수를 사용한다. total / 4.0 << avg는 double로 출력되므로 소수점까지 입력해줌
	printf("총점 : %d, 평균 : %.1lf\n", total, avg);
	// 총점을 출력하고, 평균을 소수점 한 자리까지 출력해준다.

	return 0;							// 끝
}