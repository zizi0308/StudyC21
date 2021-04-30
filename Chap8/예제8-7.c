#include <stdio.h>

int main(void)
{
	char str[5];

	str[0] = 'O';			// 문자 하나씩 집어넣음 이럴때는 null을 직접 초기화 시켜야함 
	str[1] = 'K';
	str[2] = '\0';			// '\0' Null문자 출력하는 방법
	printf("%s\n", str);

	return 0;				// 문자열로 초기화 시키면 ("OK") null값 자동으로 들어감
}