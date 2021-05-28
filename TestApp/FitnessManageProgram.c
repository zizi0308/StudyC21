#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
	Fitness member;

	while (member.num > 0)
	{
		printf("회원번호, 이름, 체중을 입력하세요: ");
		scanf("%d %s %.1f", &member.num, &member.name, &member.weight);
	}

	return 0;
}
void total_number(int count)
{
	int i;
	for ( i = 1; i <= count; i++)
	{
		printf("전체회원 등록수는 %d명 입니다.", i);
	}
}

double average_weight(Fitness** pary, int count)
{

}

int max_weight(Fitness** pary, int count)
{

}

void print_info(Fitness** pary, int index)
{

}

void free_ary(Fitness** pary, int count)
{

}