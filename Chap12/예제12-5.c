#include <stdio.h>

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	// ���߿� �Է��� �����Դϴ�.
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}