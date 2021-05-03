#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);						// 공백 전까지만 끊어서 출력함
	printf("첫 번째 단어 : %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아있는 두 번째 단어 : %s\n", str);

	return 0;
}