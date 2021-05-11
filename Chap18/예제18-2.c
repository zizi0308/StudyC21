#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)					// 문자가 끝이라면 파일을 닫음 ch == -1도 사용가능
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;
}