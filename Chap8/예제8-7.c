#include <stdio.h>

int main(void)
{
	char str[5];

	str[0] = 'O';			// ���� �ϳ��� ������� �̷����� null�� ���� �ʱ�ȭ ���Ѿ��� 
	str[1] = 'K';
	str[2] = '\0';			// '\0' Null���� ����ϴ� ���
	printf("%s\n", str);

	return 0;				// ���ڿ��� �ʱ�ȭ ��Ű�� ("OK") null�� �ڵ����� ��
}