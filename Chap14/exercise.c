#include <stdio.h>
// �л��� ���, ���� ��� ���ϴ°͵� ������ 15�� exe���� �����ؼ� �Լ��� ����� ����
int main(void)
{
	int score[4][5];					// 5�� 4������ �л�(������ �迭���� �߿��� ���� ��!�̴�.)
	int total;							// �հ踦 �����ϱ� ���� ����
	double avg;							// ����� �����ϱ� ���� ����
	int i, j;							// �ݺ� ���� ����(i�� ���� j�� ���)

	for ( i = 0; i < 4; i++)			// i�� 5�� ���� 4�� ��Ҹ� �Է��ؾ� �ϴµ�(4������ ����)
	{
		printf("5������ �����Է� : ");	
		for ( j = 0; j < 5; j++)		// 5�� ������ ���� 4���� ��Ҹ� �Է� �޾ƾ� �Ѵ�.(5���� �л�)
		{
			scanf("%d", &score[i][j]);	// ��� ���� �Է��Ѵ�
		}
	}
	
	for (i = 0; i < 4; i++)				// i�� < 5���� ��ҵ��� ����ؾ� �ϴµ�
	{
		total = 0;						// total������ ����ϱ� ���� �ʱ�ȭ �ؾ��Ѵ�(�ƴϸ� ��� �̻���)
		for ( j = 0; j < 5; j++)		// 4���� ���� 5���� ��Ҹ� ����Ѵ�.
		{
			total += score[i][j];		// total������ ����Ѵ�.(��� ��� ���� ���� ���Ѵ�)
		}
	}
	avg = total / 5.0;					// avg������ ����Ѵ�. total / 4.0 << avg�� double�� ��µǹǷ� �Ҽ������� �Է�����
	printf("���� : %d, ��� : %.1lf\n", total, avg);
	// ������ ����ϰ�, ����� �Ҽ��� �� �ڸ����� ������ش�.

	return 0;							// ��
}