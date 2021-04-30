#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";					// 최소 9개의 방이 있어야 함 실질적으로 [80]은 79개의 방
												// 나머지 빈 방들은 null문자가 출력됨
	printf("최초문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}