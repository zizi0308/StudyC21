#include <stdio.h>

int main(void)
{
	int ch;						// �Է¹��ڸ� ������ ���� �Է¹��� 
								// ��ȯ���� �� -1�� ��ȯ�Ǳ� ������ int������ ���
	ch = getchar();				// �Լ��� ��ȯ�ϴ� ���ڸ� �ٷ� ����
	printf("�Է��� ���� : ");
	putchar(ch);				// �Է��� ���� ��� (���ڿ� ����� gets, puts)
	putchar('\n');				// ���� ���� ���

	return 0;
}