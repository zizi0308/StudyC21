#include <stdio.h>

int main(void)
{
	int i = 0;				// 배열요소 첨자변수(2개 이상의 데이터를 기억하는 변수)
	char str[20];			// 문자열을 저장할 배열
	char ch;				// 입력할 문자를 받아들 임시변수

	do
	{
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[i] = '\0';
	printf("%s", str);
	return 0;
}

void my_gets(char* ps)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}