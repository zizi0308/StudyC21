#include <stdio.h>

void print_total(int(*)[5]);				// �������迭�� ���� ����ϴ� �Լ� (�迭 !������! ���)
											//

int main(void)
{
	int score[4][5];						// �������迭
	int i, j;
	
	for (i = 0; i < 4; i++)					// main�Լ��� ���� �Է¹޴´�.(14�� exercise�� ������ ����)
	{
		printf("5������ �����Է� : ");
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	print_total(score);						// ������ �迭�� ����ϴ� print_total �Լ� ȣ��
	
	return 0;
}

void print_total(int (*ary)[5])				// �迭 �����ʹ� ������ �Է�
{
	int i, j;								// for�� ���� ����
	int total;								// ������ ���� �����ϴ� ����
	double avg;								// ����� ���ϴ� �Լ�

	for ( i = 0; i < 4; i++)
	{
		total = 0;
		for ( j = 0; j < 5; j++)
		{
			total += ary[i][j];
		}
	}
	avg = total / 5.0;
	printf("���� : %d, ��� : %.1lf\n", total, avg);
}