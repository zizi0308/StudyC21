#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";	// 배열에 문자열 초기화
	char* ps = "banana";			

	puts(str);						// 문자열을 출력하고 자동으로 개행됨
	fputs(ps, stdout);				// banana만 출력(개행기능 없음) 뒤에 스트림을 적어줘야함
	puts("milk");					// 문자열이 저장되어있는 위치에 바로출력

	return 0;
}