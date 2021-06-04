#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int num;
	char name[20];
	double weight;
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
	i = 0;
	int temp = 0;

	while (1)
	{
		printf("회원번호를 입력하세요: ");						// 입력 메세지
		scanf("%d", &temp);										// 회원번호 입력
		if (temp < 0) break;									// temp가 0미만이면 break
		else {
			ary[i] = malloc(sizeof(Fitness));			// 회원번호 동적할당
			if (ary[i] != NULL) {							// 회원번호가 존재하면
				ary[i]->num = temp;						// ary[i]->num에 temp를 복사해준다
				printf("이름을 입력하세요: ");				// 입력 메세지
				scanf("%s", ary[i]->name);	// 이름, 몸무게 입력
				printf("체중을 입력하세요: ");
				scanf("%lf", &ary[i]->weight);	// 이름, 몸무게 입력
				getchar();
				i++;
				count++;
			}
		}
	}
	total_number(count);
	printf("평균몸무게 : %lf\n", average_weight(ary, count));
	printf("최고몸무게 인덱스 : %d\n", max_weight(ary, count));
	//average_weight(ary, count);

	print_info(ary, count - 1);
	free_ary(ary, count);
	return 0;
}
void total_number(int count) {
	printf("전체회원 등록수는 %d명 입니다.\n", count);
}

double average_weight(Fitness** pary, int count)
{
	int i;														// for문 실행을 위한 변수
	double sum;													// 임시 합계변수
	sum = 0;													// 초기화
	for (i = 0; i < count; i++) {								// i가 count와 같을 때까지 계속 반복
		sum += pary[i]->weight;									// sum에 pary[i]->weight의 값들을 계속 더해줌 
	}
	return sum / i;											// 총합 / 개수 + 1(i는 0부터 시작)를 return해줌
}

int max_weight(Fitness** pary, int count)
{
	double max_weight;
	int i;
	int max_index;

	max_index = 0;
	max_weight = pary[max_index]->weight;										// 첫번째 값을 최대몸무게로 설정
	
	for (i = 0; i < count; i++) {								// count까지 for문 실행
		if (pary[i]->weight > max_weight) {
			max_weight = pary[i]->weight;		// 해당 배열의 몸무게 데이터가 max보다 크면 해당배열을 max로 재설정
			max_index = i;
		}
	}
	return max_index;													// 최대 몸무게의 인덱스 값을 반환하는 함수이므로 i값을 반환
}

void print_info(Fitness** pary, int index)
{
	printf("회원번호 : %d , 회원이름 : %s , 몸무게 : %f\n", pary[index]->num, pary[index]->name, pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{
	int i;
	for (i = 0; i < count; i++) {	// 동적할당을 했던 pary[i]->num에 대해 동적할당 해제를 시킴
		free(pary[i]);
		printf("%d번째완료", i);
	}
}