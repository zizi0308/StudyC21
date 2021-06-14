#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {									// 구조체 선언
	int num;										// int형 멤버변수
	char name[20];									// 문자열 멤버변수
	double weight;									// double형 멤버변수
} Fitness;

Fitness* ary[100];									// 포인터 배열선언
void total_number(int count);						// 현재 등록 회원 수 반환
double average_weight(Fitness** pary, int count);	// 평균체중 반환
int max_weight(Fitness** pary, int count);			// 최대체중회원의 인덱스 반환
void print_info(Fitness** pary, int index);			// 회원정보 출력
void free_ary(Fitness** pary, int count);			// 동적할당 영역해제


int main()
{
	static int count;	// 회원수
	count = 0;			// 정적멤버변수 초기화
	int i;				// 배열번호
	i = 0;				// 배열번호 초기화
	int temp = 0;		// 회원번호 임시저장을 위한 변수생성

	while (1)
	{
		printf("회원번호를 입력하세요: ");						// 입력 메세지
		scanf("%d", &temp);										// 회원번호 입력
		if (temp < 0) break;									// temp가 0미만이면(회원번호 음수입력이면) break
		else {
			ary[i] = malloc(sizeof(Fitness));					// 배열 동적할당
			if (ary[i] != NULL) {								// 배열이 존재하면
				ary[i]->num = temp;								// temp에 ary[i]->num를 복사해준다
				printf("이름을 입력하세요: ");					// 입력 메세지(이름)
				scanf("%s", ary[i]->name);						// 이름 입력
				printf("체중을 입력하세요: ");					// 입력 메세지(체중)
				scanf("%lf", &ary[i]->weight);					// 몸무게 입력
				printf("\n");									// 개행
				getchar();										// 버퍼를 비우기 위한 getchar()
				i++;											// 증감연산자 i(무한반복으로 break되기 전까지 순차적으로 배열을 증가시킴)
				count++;										// 증감연산자 count(무한반복으로 break되기 전까지 순차적으로 회원수를 증가시킴)
			}
		}
	}
	printf("====================================\n");
	total_number(count);											// 회원수를 반환하기위해 입력값에 count를 넣어줌
	printf("평균몸무게 : %lf kg\t", average_weight(ary, count));	// 평균몸무게 출력(average_weight의 출력형이 double이므로 %lf)
	printf("최고몸무게 회원번호 : %d\n", max_weight(ary, count));	// 최고 몸무게 회원번호 출력
	print_info(ary, count - 1);										// count는 0부터 시작, index는 1부터 시작(Line 87)하므로 count - 1을 해줌
	free_ary(ary, count);											// 배열의 동적할당 해제
	return 0;														// 메인함수 종료
}

void total_number(int count) {
	printf("전체회원 등록수: %d명\n", count);
}

double average_weight(Fitness** pary, int count)
{
	int i;														// for문 실행을 위한 변수 i
	double sum;													// 합계변수 sum
	sum = 0;													// sum 초기화
	for (i = 0; i < count; i++) {								// i가 count-1과 같을 때까지 계속 반복
		sum += pary[i]->weight;									// pary[i]->weight의 값들을 계속 더해 sum에 저장함 
	}
	return sum / i;												// 총합 / 개수를 return해줌
}

int max_weight(Fitness** pary, int count)
{
	int i;														// for문 실행을 위한 변수
	int max_index;												// 최고 몸무게의 인덱스 값을 저장하기 위한 변수
	max_index = pary[0]->num;									// max_index 초기화
	for (i = 1; i < count; i++) {								// i는 1부터 count - 1까지 for문 실행
		if (pary[i]->weight > pary[i - 1]->weight) {			// pary[i]->weight가 이전 값보다 크면
			max_index = pary[i]->num;							// 그 최대 몸무게의 인덱스 값을 max_index에 저장
		}
	}
	return max_index-1;										// for문 실행이후 저장된 최대 몸무게의 인덱스 반환
}

void print_info(Fitness** pary, int index)
{
	printf("\n");
	printf("<최고 몸무게 회원정보>\n");
	printf("회원번호 : %d\t  회원이름 : %s\t  몸무게 : %f kg\n", pary[index]->num, pary[index]->name, pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{
	int i;														// for문 실행을 위한 변수 i
	for (i = 0; i < count; i++) {								// 동적할당을 했던 pary[i]에 대해 for문을 돌며 순차적으로 
		free(pary[i]);											// 동적할당을 해제를 시킴
		//printf("%d번째완료", i);								// 동적할당 해제 확인
	}
}