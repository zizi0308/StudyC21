#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	for ( i = 0; i < 6; i++)		// tiger + enter���� �����ͼ� ������ ��
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}