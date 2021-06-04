#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int num;
	char name[20];
	double weight;
} Fitness;

Fitness* ary[100];									// ������ �迭����
void total_number(int count);						// ���� ��� ȸ�� �� ��ȯ
double average_weight(Fitness** pary, int count);	// ���ü�� ��ȯ
int max_weight(Fitness** pary, int count);			// �ִ�ü��ȸ���� �ε��� ��ȯ
void print_info(Fitness** pary, int index);			// ȸ������ ���
void free_ary(Fitness** pary, int count);			// �����Ҵ� ��������


int main()
{
	static int count;	// ȸ����
	count = 0;			// ����������� �ʱ�ȭ
	int i;				// �迭��ȣ
	i = 0;
	int temp = 0;

	while (1)
	{
		printf("ȸ����ȣ�� �Է��ϼ���: ");						// �Է� �޼���
		scanf("%d", &temp);										// ȸ����ȣ �Է�
		if (temp < 0) break;									// temp�� 0�̸��̸� break
		else {
			ary[i] = malloc(sizeof(Fitness));			// ȸ����ȣ �����Ҵ�
			if (ary[i] != NULL) {							// ȸ����ȣ�� �����ϸ�
				ary[i]->num = temp;						// ary[i]->num�� temp�� �������ش�
				printf("�̸��� �Է��ϼ���: ");				// �Է� �޼���
				scanf("%s", ary[i]->name);	// �̸�, ������ �Է�
				printf("ü���� �Է��ϼ���: ");
				scanf("%lf", &ary[i]->weight);	// �̸�, ������ �Է�
				getchar();
				i++;
				count++;
			}
		}
	}
	total_number(count);
	printf("��ո����� : %lf\n", average_weight(ary, count));
	printf("�ְ������ �ε��� : %d\n", max_weight(ary, count));
	//average_weight(ary, count);

	print_info(ary, count - 1);
	free_ary(ary, count);
	return 0;
}
void total_number(int count) {
	printf("��üȸ�� ��ϼ��� %d�� �Դϴ�.\n", count);
}

double average_weight(Fitness** pary, int count)
{
	int i;														// for�� ������ ���� ����
	double sum;													// �ӽ� �հ躯��
	sum = 0;													// �ʱ�ȭ
	for (i = 0; i < count; i++) {								// i�� count�� ���� ������ ��� �ݺ�
		sum += pary[i]->weight;									// sum�� pary[i]->weight�� ������ ��� ������ 
	}
	return sum / i;											// ���� / ���� + 1(i�� 0���� ����)�� return����
}

int max_weight(Fitness** pary, int count)
{
	double max_weight;
	int i;
	int max_index;

	max_index = 0;
	max_weight = pary[max_index]->weight;										// ù��° ���� �ִ�����Է� ����
	
	for (i = 0; i < count; i++) {								// count���� for�� ����
		if (pary[i]->weight > max_weight) {
			max_weight = pary[i]->weight;		// �ش� �迭�� ������ �����Ͱ� max���� ũ�� �ش�迭�� max�� �缳��
			max_index = i;
		}
	}
	return max_index;													// �ִ� �������� �ε��� ���� ��ȯ�ϴ� �Լ��̹Ƿ� i���� ��ȯ
}

void print_info(Fitness** pary, int index)
{
	printf("ȸ����ȣ : %d , ȸ���̸� : %s , ������ : %f\n", pary[index]->num, pary[index]->name, pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{
	int i;
	for (i = 0; i < count; i++) {	// �����Ҵ��� �ߴ� pary[i]->num�� ���� �����Ҵ� ������ ��Ŵ
		free(pary[i]);
		printf("%d��°�Ϸ�", i);
	}
}