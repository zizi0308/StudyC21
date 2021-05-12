#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len = 0;
	char str[20];

	printf("\n문자열을 입력하세요 : ");
	gets(str);								// 입력한 문자열을 배열에 저장(gets << 문자열 입력 함수)
	printf("입력하신 문자열은 : \n");
	for  (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		len += 1;
	}

	printf("\" \n입니다.");
	printf("\n\n입력된 문자열의 길이 : %d\n", len);

	getchar();
	return 0;
}