#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int* pa, int size);
void swap_ary(int *pa, int size);
void print_ary(int* pa, int size);


int main(void)
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);		// 10��, �迭����� ������ ����ϱ� ���� ��
	input_ary(ary, size);							// ���� �Է¹ޱ� ���� �Լ�
	swap_ary(ary, size);							// ���� �������� �ٲٱ� ���� �Լ�
	print_ary(ary, size);							// �������� �ٲ� ���� ����ϱ� ���� �Լ�
	printf("\n");									// ����
	return 0;										// ���� �Լ��� ����
}

void input_ary(int* pa, int size)
{
	int i;											// �ݺ����� �����ϱ����� ����

	printf("%d���� ������ �Է� : ", size);			// �������� �Է¹ޱ� ���� ���� size��ŭ �Է��ؾ� ��

	for ( i = 0; i < size; i++)						// ary[0] ���� ary[size-1]������ �迭�� ��� 
	{
		scanf("%d", &pa[i]);						// �Է��� �迭����� �ּ� ����(pa + i)�� ����
	}
}

void swap_ary(int* pa, int size)
{
	int temp;								// ���� ������ �ӽ������
	int i;									// �ݺ����� �����ϱ� ���� ����
	int j;									// �Է��� ���ڹ迭�� ������� ����ϱ� ���� �����

	for (i = 0; i < size / 2; i++)			// �ݸ� �ٲٸ� �������� �ٲ� ���� �ٲٸ� �ٽ� ���󺹱��Ǵϱ� /2�� ��
	{										// ���ڿ� ���ڰ� ���� ��Ī������ ���� �ϹǷ�
		j = size - i - 1;					// �迭�� ������ �������� 
		temp = pa[i];						// �ӽ����庯���� pa[i]�� ����
		pa[i] = pa[j];						// �迭����� ��ȯ, ù��° �迭��ҿ� ������ �迭����� ��ȯ���� ���������� �̷����
		pa[j] = temp;						// ��ȯ �� �迭���� �ٽ� �ӽ� ����ҿ� ����
	}
}
void print_ary(int* pa, int size)
{
	int i;
	
	for ( i = 0; i < size; i++)				// pa[0]���� pa[i-1]������ �迭��� ���鼭
	{
		printf("%d ", pa[i]);				// �� �迭 ��ҵ��� ���
	}
}