#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void insertion_sort(char*);										// �����ͷ� �Է°��� �޴� �������� �Լ�����
int main()
{
	int i = 0;													// for���� ���� ��������
	char lower_ary[10] = {0};									// �ҹ��� ����迭 ���� �� �ʱ�ȭ
	char upper_ary[10] = {0};									// �빮�� ����迭 ���� �� �ʱ�ȭ
	char input_ary[10] = {0};									// ���� �Է¹ޱ� ���� �迭���� �� �ʱ�ȭ
	
		printf("���ĺ��� �Է��ϼ��� : ");
		scanf("%s", input_ary);
	
	for ( i = 0; i < 10; i++)									// �迭�� 9��° ����� i�� ���ؼ� ����� ����
	{
		if ((input_ary[i]) >= 'A' && (input_ary[i] <= 'Z'))		// input_ary�� �빮�ڰ� ������
		{
			upper_ary[i] = input_ary[i];						// �� ���� upper_ary�� ������
			//printf("�빮�� %c", upper_ary[i]);				// ����� Ȯ���׽�Ʈ
		}
		
		if ((input_ary[i]) >= 'a' && (input_ary[i] <= 'z'))		// input_ary�� �ҹ��ڰ� ������
		{
			lower_ary[i] = input_ary[i];						// �� ���� lower_ary�� ������
			//printf("�ҹ��� %c", lower_ary[i]);				// ����� Ȯ���׽�Ʈ
		}
	}
	
	printf("<�빮�� ������ ����>\n");
	insertion_sort(upper_ary);
	printf("\n");
	printf("\n");
	printf("<�ҹ��� ������ ����>\n");
	insertion_sort(lower_ary);
	printf("\n");
	printf("\n");
	printf("<��ü ������ ����>\n");
	insertion_sort(input_ary);
	printf("\n");
	return 0;													// �����Լ� ����
}
void insertion_sort(char *pinput_ary)
{
	int i;														// ���ϴ� �ε����� �����ϱ� ���� i
	int j;														// �ٷ� �� �ε����Ӹ� �ƴ϶� ���� ��ü �ε������� ���ϱ����� j
	int temp = 0;												// swap�� ���� �ӽ������
	for ( i = 1; i < 10; i++)									// �ι�° ������ �񱳰� ���۵ǹǷ� �ε����� 1���� �����ؾ� ��, ��ü �迭������ŭ ����
	{
		for (j = i; j > 0; j--) {								// j�� �������� �̵��ؾ� �ϹǷ�(���� �ε������� ��) ���� ���ҵ�
			if (pinput_ary[j] < pinput_ary[j - 1]) {			// j�� �迭�� ���ĺ����� j-1�� �迭�� ���ĺ��� �� ũ�ٸ�
				temp = pinput_ary[j];							// j�� �ӽ������Ѵ�(�����ؾ� �� ����� �ӽ�������)
				pinput_ary[j] = pinput_ary[j - 1];				// j�� �ڸ��� �ٽ� j-1�� �־��ְ�
				pinput_ary[j - 1]  = temp;						// j-1�� �ڸ��� temp�� ��(j)�� �־��ָ鼭 ���� �ڸ��� �ٲ�� ������ �ȴ�.
			}
		}
	}
	for (i = 0; i < 10; i++) {									// ���
		printf("%c", pinput_ary[i]);
	}
}