#include <stdio.h>

int main(void)
{
	int i, j, k;

	for ( i = 0; i < 10; i++)					// i = 0, 0 < 10
	{
		for ( j = 0; j < i; j++)				// j = 0, 0 < 0 (����)
		{
			printf(" ");						// �տ� for�� ����X, �������
		}
		for ( k = 10; k > i * 2 -1; k--)		// k = 10, 10 > 0 * 2 - 1 (-1) 
		{										// -1 ���� 10���� 11�ڸ�
			printf("*");						// �� 11��
		}

		printf("\n");							// ����
	}

	return 0;
}