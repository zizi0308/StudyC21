#include <stdio.h>

void print_total(int(*)[4]);				// �������迭�� ���� ����ϴ� �Լ� (�迭 !������! ���)
void print_std_total(int(*)[4]);
void print_subj_total(int(*)[4]);


int main(void)
{
	int score[5][4];						// �������迭
	int i, j;
	
	for (i = 0; i < 5; i++)					// main�Լ��� ���� �Է¹޴´�.(14�� exercise�� ������ ����)
	{
		printf("4������ �����Է� : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	print_total(score);						// ������ �迭�� ����ϴ� print_total �Լ� ȣ��
	print_std_total(score);
	print_subj_total(score);
	return 0;
}

void print_total(int (*ary)[4])				// �迭 �����ʹ� ������ �Է�
{
	int i, j;								// for�� ���� ����
	int total;								// ������ ���� �����ϴ� ����
	double avg;								// ����� ���ϴ� �Լ�

	for ( i = 0; i < 5; i++)
	{
		total = 0;
		for ( j = 0; j < 4; j++)
		{
			total += ary[i][j];
		}
	}
	avg = total / 5.0;
	printf("���� : %d, ��� : %.1lf\n", total, avg);
}

void print_std_total(int (*std_ary)[4])
{
	int i, j;
	int std_tot;
	double std_avg;

	for (i = 0; i < 5; i++)			// �л��� ��� ���ϱ�
	{
		printf("<%d�� �л�>\n", i + 1);
		std_tot = 0;
		for (j = 0; j < 4; j++)
		{
			std_tot += std_ary[i][j];
		}
		std_avg = std_tot / 4.0;		// �л� 4��
		printf("��� : %.1lf\n", std_avg);
	}
}
void print_subj_total(int(*subj_ary)[4])
{
	int i, j;
	int subj_tot;
	double subj_avg;

	for (j = 0; j < 4; j++)			// ���� ��� ���ϱ�
	{
		printf("<%d��° ����>\n", j + 1);
		subj_tot = 0;
		for (i = 0; i < 5; i++)
		{
			subj_tot += subj_ary[i][j];
		}
		subj_avg = subj_tot / 5.0;		// 5����
		printf("��� : %.1lf\n", subj_avg);
	}
	printf("\n");
}