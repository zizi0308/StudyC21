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
	Fitness member[100];
	int i;
	i = 1;
	int temp;
	while (member[i].num > 0)
	{
		printf("ȸ����ȣ, �̸�, ü���� �Է��ϼ���: ");
		scanf("%d", temp);
		if (temp < 0) {
			break;
		}
		else {
			member[i].num = temp;
			scanf("%s %.1f", member[i].name, &member[i].weight);
		}
		
	}

	return 0;
}
void total_number(int count)
{
	int i;
	for ( i = 1; i <= count; i++)
	{
		printf("��üȸ�� ��ϼ��� %d�� �Դϴ�.", i);
	}
}

double average_weight(Fitness** pary, int count)
{
	int i;
	int sum;
	sum = 0;
	for ( i = 0; i <= count; i++)
	{
		sum += member[i].;
	}
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