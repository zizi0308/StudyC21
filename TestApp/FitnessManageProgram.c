#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {									// ����ü ����
	int num;										// int�� �������
	char name[20];									// ���ڿ� �������
	double weight;									// double�� �������
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
	i = 0;				// �迭��ȣ �ʱ�ȭ
	int temp = 0;		// ȸ����ȣ �ӽ������� ���� ��������

	while (1)
	{
		printf("ȸ����ȣ�� �Է��ϼ���: ");						// �Է� �޼���
		scanf("%d", &temp);										// ȸ����ȣ �Է�
		if (temp < 0) break;									// temp�� 0�̸��̸�(ȸ����ȣ �����Է��̸�) break
		else {
			ary[i] = malloc(sizeof(Fitness));					// �迭 �����Ҵ�
			if (ary[i] != NULL) {								// �迭�� �����ϸ�
				ary[i]->num = temp;								// temp�� ary[i]->num�� �������ش�
				printf("�̸��� �Է��ϼ���: ");					// �Է� �޼���(�̸�)
				scanf("%s", ary[i]->name);						// �̸� �Է�
				printf("ü���� �Է��ϼ���: ");					// �Է� �޼���(ü��)
				scanf("%lf", &ary[i]->weight);					// ������ �Է�
				printf("\n");
				getchar();										// ���۸� ���� ���� getchar()
				i++;											// ���������� i(���ѹݺ����� break�Ǳ� ������ ���������� �迭�� ������Ŵ)
				count++;										// ���������� count(���ѹݺ����� break�Ǳ� ������ ���������� ȸ������ ������Ŵ)
			}
		}
	}
	printf("\n");
	total_number(count);											// ȸ������ ��ȯ�ϱ����� �Է°��� count�� �־���
	printf("��ո����� : %lf kg\t", average_weight(ary, count));	// ��ո����� ���(average_weight�� ������� double�̹Ƿ� %lf)
	printf("�ְ������ ȸ����ȣ : %d\n", max_weight(ary, count));	// �ְ� ������ ȸ����ȣ ���
	print_info(ary, count - 1);										// count�� 0���� ����, index�� 1���� ����(Line 87)�ϹǷ� count - 1�� ����
	free_ary(ary, count);											// �迭�� �����Ҵ� ����
	return 0;														// �����Լ� ����
}

void total_number(int count) {
	printf("��üȸ�� ��ϼ�: %d��\n", count);
}

double average_weight(Fitness** pary, int count)
{
	int i;														// for�� ������ ���� ���� i
	double sum;													// �հ躯�� sum
	sum = 0;													// sum �ʱ�ȭ
	for (i = 0; i < count; i++) {								// i�� count-1�� ���� ������ ��� �ݺ�
		sum += pary[i]->weight;									// pary[i]->weight�� ������ ��� ���� sum�� ������ 
	}
	return sum / i;												// ���� / ������ return����
}

int max_weight(Fitness** pary, int count)
{
	double max_weight;											// �ְ� �����Ը� �����ϱ� ���� ����
	int i;														// for�� ������ ���� ����
	int max_index;												// �ְ� �������� �ε��� ���� �����ϱ� ���� ����

	max_index = 0;												// max_index �ʱ�ȭ
	max_weight = pary[max_index]->weight;						// ù��° ���� �ִ�����Է� ����
	
	for (i = 0; i < count; i++) {								// count - 1���� for�� ����
		if (pary[i]->weight > max_weight) {						// �ش� �迭�� ������ �����Ͱ� max_weight���� ũ��
			max_weight = pary[i]->weight;						// �ش� �迭�� �ִ�����Է� �缳���ϰ�
			max_index = i;										// �� �ִ� �������� �ε��� ���� max_index�� ����
		}
	}
	return max_index;											// for�� �������� ����� �ִ�������� �ε��� ��ȯ
}

void print_info(Fitness** pary, int index)
{
	printf("\n");
	printf("<ȸ������>\n");
	printf("ȸ����ȣ : %d\t  ȸ���̸� : %s\t  ������ : %f kg\n", pary[index]->num, pary[index]->name, pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{
	int i;														// for�� ������ ���� ���� i
	for (i = 0; i < count; i++) {								// �����Ҵ��� �ߴ� pary[i]�� ���� for���� ���� ���������� 
		free(pary[i]);											// �����Ҵ��� ������ ��Ŵ
		//printf("%d��°�Ϸ�", i);								// �����Ҵ� ���� Ȯ��
	}
}