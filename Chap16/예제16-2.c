#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;								// 동적 할당 영역을 연결할 포인터
	int i, sum = 0;							// 반복 제어 변수와 합계 변수

	pi = (int*)malloc(5 * sizeof(int));		// 저장공간에 20바이트 할당
	if (pi == NULL)							// 메모리 부족시 예외 처리 구문 예외구문줘서 메모리 확인하기
	{
		printf("메모리가 부족합니다.");
		exit(1);							// 에러가 있을 때 정상적인 강제종료 (0은 에러없이 종료하는 것)
	}

	printf("다섯명의 나이를 입력하세요 : ");
	for ( i = 0; i < 5; i++)				// 배열은 무조건 for문
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}

	printf("다섯명의 평균나이 : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}