#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char temp[80];
	char* str[3];									// ������ �迭����
	int i;

	for ( i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);									//���ڿ� �����Լ�
		str[i] = (char *)malloc(strlen(temp) + 1);	// �޸� �����Ҵ�
		strspy(str[i], temp);						// strspy�� ���� �Է��� ���� �����ؼ� ���
	}

	for ( i = 0; i < 3; i++)						// �޸� �����Ҵ� ������ 3�� �̹Ƿ�
	{
		printf("%s\n", str[i]);
	}

	for ( i = 0; i < 3; i++)						// ������ for���� ���� ����(�Ҵ���� ������ ������ŭ ����)
	{
		free(str[i]);
	}

	return 0;
}