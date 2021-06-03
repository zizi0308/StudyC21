#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int num;
	char name[20];
	double weight;
} Fitness;

Fitness* ary[100];
void total_number(int count);
double average_weight(Fitness** pary, int count);
int max_weight(Fitness** pary, int count);
void print_info(Fitness** pary, int index);
void free_ary(Fitness** pary, int count);


int main()
{
	static int count;	// 회원수
	count = 0;			// 정적멤버변수 초기화
	int i;				// 배열번호
	i = 1;
	int temp = 0;
	while (ary[i]->num > 0)
	{
		printf("회원번호를 입력하세요: ");
		scanf("%d", &temp);
		if (temp < 0) {
			break;
		}
		else {
			ary[i]->num = temp;
			printf("이름, 체중을 입력하세요: ");
			scanf("%s %.1f", ary[i]->name, &ary[i]->weight);
		}
	}
	total_number(count);
	average_weight(ary, count);
	return 0;
}
void total_number(int count)
{
	printf("전체회원 등록수는 %d명 입니다.", count);
}

double average_weight(Fitness** pary, int count)
{
	int i;
	int sum;
	sum = 0;
	for (i = 0; i <= count; i++) {
		sum += pary[i]->weight;
	}
	return sum / i;
}

int max_weight(Fitness** pary, int count)
{
	int max;
	int i;

	max = pary[0];
	for (i = 0; i < count; i++)
	{
		if (pary[i] > max) max = pary[i];
	}

	return max;
}

void print_info(Fitness** pary, int index)
{
	printf("회원번호 : %d, 회원이름 : %s, 몸무게 : %.1lf", pary[index]->num, pary[index]->name, pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{

}