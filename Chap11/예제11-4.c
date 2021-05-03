#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	for ( i = 0; i < 6; i++)		// tiger + enter까지 가져와서 개행이 됨
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}