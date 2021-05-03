#include <stdio.h>
void input_lotto(int* pa, int size);
void print_lotto(int* pa, int size);

int main(void)
{
	int lotto[6];
	int size = sizeof(lotto) / sizeof(lotto[0]);			// �迭 ����� ���� ���
	input_lotto(lotto, size);
	printf("\n");
	return 0;
}

void input_lotto(int* pa, int size)
{
	int num;
	int lotto[6];
	int p = 0;												// �Է��� �迭�� ���� ��
	
	printf("�ζǹ�ȣ�� �Է��ϼ��� : ");
	for (num = 0; num < size; num++)
	{
		scanf("%d", &lotto[num]);
	}

	for (int num = 0; num < size; num++) 
	{	// �迭�� ���Ͽ� �ߺ��� ���� �͵鸸 �迭�� ��´�.
		int p = 0;
		//�ߺ��˻�
		while (p < num && lotto[p] != lotto[num]) p++;		// �Է��� �迭 ���� num���� �۰�  
		if (p == num)	//�ߺ��� ���ٸ�						// �� �迭�� ���������� ��� �ݺ��Ѵ�.
		{	
			pa[num] = lotto[p];
		}
		else {
			printf("�ߺ� ����");
			return;
		}
	}
	print_lotto(pa, size);
}

void print_lotto(int* pa, int size)
{
	int num;
	printf("�Է��Ͻ� �ζǹ�ȣ�� :");
	for (num = 0; num < size; num++)
	{
		printf("%d ", pa[num]);								// �迭��ҵ��� ���ʷ� ���
	}
	
}