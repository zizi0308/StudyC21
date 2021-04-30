#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>						// 문자열 관련 함수를 모아놓는 헤더파일(strcpy사용시 필요)

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");				// str1 배열에 tiger 복사
	strcpy(str2, str1);					// str2 배열에 str1 배열 복사
	printf("%s, %s\n", str1, str2);

	return 0;
}