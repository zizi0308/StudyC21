#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);						// ��ĭ�� ������ ���ڿ� �Է�
	puts("�Էµ� ���ڿ� : ");		// ���ڿ� ��� ���
	puts(str);						// �迭�� ����� ���ڿ� ���  puts�� �ڵ������� ������� ��
									// printf�� scanf���� ������(��ȯ���� ���Ĺ��ھ��� �״�� ����)
	return 0;
}