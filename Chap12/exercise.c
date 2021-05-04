#include <stdio.h>
#include <string.h>

int main(void)
{
	char str;

	printf("알파벳을 입력하세요 : ");
	scanf("%c", &str);
	
	
	if ((str >= 65) && (str <= 90))
	{
		char p;
		p = str + ('a' - 'A');
		printf("바뀐 문자 : %c\n", p);
	}
	else
	{
		char p;
		p = str - ('a' - 'A');
		printf("바뀐 문자 : %c\n", p);
	}
	

	return 0;
}