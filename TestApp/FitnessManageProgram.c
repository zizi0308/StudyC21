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
	static int count;	// ȸ����
	count = 0;			// ����������� �ʱ�ȭ
	int i;				// �迭��ȣ
	i = 1;
	int temp = 0;
	while (ary[i]->num > 0)
	{
		printf("ȸ����ȣ�� �Է��ϼ���: ");
		scanf("%d", &temp);
		if (temp < 0) {
			break;
		}
		else {
			ary[i]->num = temp;
			printf("�̸�, ü���� �Է��ϼ���: ");
			scanf("%s %.1f", ary[i]->name, &ary[i]->weight);
		}
	}
	total_number(count);
	average_weight(ary, count);
	return 0;
}
void total_number(int count)
{
	printf("��üȸ�� ��ϼ��� %d�� �Դϴ�.", count);
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
	printf("ȸ����ȣ : %d, ȸ���̸� : %s, ������ : %.1lf", pary[index]->num, pary[index]->name, pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{

}