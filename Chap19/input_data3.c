#include <stdio.h>

extern int count;				// main�� �ִ� count�� ���ڴ�.
int total = 0;					// ���⿡ �ʱ�ȭ �Ǿ�����(���������� �ʱ�ȭ �Ǿ��ִ� ��ġ�� ������ ��ġ)

int input_data(void)
{
	int pas;

	while (1)
	{
		printf("����Է� : ");
		scanf("%d", &pas);
		if (pas < 0) break;
		count++;
		total += pas;
	}

	return total;
}