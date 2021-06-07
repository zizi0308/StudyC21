#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void insertion_sort(char*);										// 포인터로 입력값을 받는 삽입정렬 함수생성
int main()
{
	int i = 0;													// for문을 위한 변수생성
	char lower_ary[10] = {0};									// 소문자 저장배열 생성 및 초기화
	char upper_ary[10] = {0};									// 대문자 저장배열 생성 및 초기화
	char input_ary[10] = {0};									// 값을 입력받기 위한 배열생성 및 초기화
	
		printf("알파벳을 입력하세요 : ");
		scanf("%s", input_ary);
	
	for ( i = 0; i < 10; i++)									// 배열의 9번째 방까지 i를 더해서 결과값 생성
	{
		if ((input_ary[i]) >= 'A' && (input_ary[i] <= 'Z'))		// input_ary가 대문자가 있으면
		{
			upper_ary[i] = input_ary[i];						// 그 값을 upper_ary에 저장함
			//printf("대문자 %c", upper_ary[i]);				// 결과값 확인테스트
		}
		
		if ((input_ary[i]) >= 'a' && (input_ary[i] <= 'z'))		// input_ary에 소문자가 있으면
		{
			lower_ary[i] = input_ary[i];						// 그 값을 lower_ary에 저장함
			//printf("소문자 %c", lower_ary[i]);				// 결과값 확인테스트
		}
	}
	
	printf("<대문자 사전순 정렬>\n");
	insertion_sort(upper_ary);
	printf("\n");
	printf("\n");
	printf("<소문자 사전순 정렬>\n");
	insertion_sort(lower_ary);
	printf("\n");
	printf("\n");
	printf("<전체 사전순 정렬>\n");
	insertion_sort(input_ary);
	printf("\n");
	return 0;													// 메인함수 종료
}
void insertion_sort(char *pinput_ary)
{
	int i;														// 비교하는 인덱스를 지정하기 위한 i
	int j;														// 바로 앞 인덱스뿐만 아니라 앞의 전체 인덱스들을 비교하기위한 j
	int temp = 0;												// swap을 위한 임시저장소
	for ( i = 1; i < 10; i++)									// 두번째 값부터 비교가 시작되므로 인덱스가 1부터 시작해야 함, 전체 배열개수만큼 실행
	{
		for (j = i; j > 0; j--) {								// j가 왼쪽으로 이동해야 하므로(앞의 인덱스들을 비교) 점점 감소됨
			if (pinput_ary[j] < pinput_ary[j - 1]) {			// j번 배열의 알파벳보다 j-1번 배열의 알파벳이 더 크다면
				temp = pinput_ary[j];							// j를 임시저장한다(정렬해야 할 대상을 임시저장함)
				pinput_ary[j] = pinput_ary[j - 1];				// j의 자리에 다시 j-1을 넣어주고
				pinput_ary[j - 1]  = temp;						// j-1의 자리에 temp의 값(j)을 넣어주면서 서로 자리가 바뀌고 정렬이 된다.
			}
		}
	}
	for (i = 0; i < 10; i++) {									// 출력
		printf("%c", pinput_ary[i]);
	}
}