#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);						// 빈칸을 포함한 문자열 입력
	puts("입력된 문자열 : ");		// 문자열 상수 출력
	puts(str);						// 배열에 저장된 문자열 출력  puts는 자동적으로 개행시켜 줌
									// printf나 scanf보다 가벼움(변환문자 서식문자없이 그대로 보냄)
	return 0;
}