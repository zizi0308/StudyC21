#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len = 0;
	char str[20];

	printf("\n���ڿ��� �Է��ϼ��� : ");
	gets(str);								// �Է��� ���ڿ��� �迭�� ����(gets << ���ڿ� �Է� �Լ�)
	printf("�Է��Ͻ� ���ڿ��� : \n");
	for  (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		len += 1;
	}

	printf("\" \n�Դϴ�.");
	printf("\n\n�Էµ� ���ڿ��� ���� : %d\n", len);

	getchar();
	return 0;
}