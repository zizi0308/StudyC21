#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;								// ���� �Ҵ� ������ ������ ������
	int i, sum = 0;							// �ݺ� ���� ������ �հ� ����

	pi = (int*)malloc(5 * sizeof(int));		// ��������� 20����Ʈ �Ҵ�
	if (pi == NULL)							// �޸� ������ ���� ó�� ���� ���ܱ����༭ �޸� Ȯ���ϱ�
	{
		printf("�޸𸮰� �����մϴ�.");
		exit(1);							// ������ ���� �� �������� �������� (0�� �������� �����ϴ� ��)
	}

	printf("�ټ����� ���̸� �Է��ϼ��� : ");
	for ( i = 0; i < 5; i++)				// �迭�� ������ for��
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}

	printf("�ټ����� ��ճ��� : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}