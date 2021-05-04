#include <stdio.h>

int main(void)
{
	int score[3][4];						// 2차원 배열 선언 앞이 행, 뒤가 열(행 3개 열 4개)
	int total;								// 누적을 저장할 변수
	double avg;
	int i, j;

	for ( i = 0; i < 3; i++)				// 배열은 무조건 for문(바깥쪽 : 행을 제어함)
	{
		printf("4과목의 점수 입력 : ");		// 입력 안내 메세지
		for ( j = 0; j < 4; j++)			// 안쪽 for문 : 열을 제어함
		{
			scanf("%d", &score[i][j]);		// i번째 해당되는 행에 j번째 열이 들어감
		}
	}

	for ( i = 0; i < 3; i++)				// 학생 수 만큼 반복
	{
		total = 0;							// 학생이 바뀔 때마다 0으로 초기화
		for ( j = 0; j < 4; j++)			// 과목 수 만큼 반복
		{
			total += score[i][j];			// 학생 별로 총점 누적
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}

	return 0;
}