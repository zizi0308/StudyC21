#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";					// �ּ� 9���� ���� �־�� �� ���������� [80]�� 79���� ��
												// ������ �� ����� null���ڰ� ��µ�
	printf("���ʹ��ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}