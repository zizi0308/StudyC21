#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	int i;
	int str_len;
	
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	str_len = strlen(str);
	for ( i = 0; i < str_len / 2; i++)
	{
		if (str[i] != str[str_len - i - 1])
		{
			//printf("%c%c", str[0], str[str_len - i -1]);
			printf("%s(은)는 회문이 아닙니다.", str);
			break;
		}
		printf("회문입니다.");
	}
	return 0;
}