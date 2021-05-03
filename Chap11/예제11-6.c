#include <stdio.h>
void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));				// 한 줄의 문자열을 입력하는 함수 
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char* str, int size)
{
	int ch;									// getchar 함수의 반환값을 저장 할 변수
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size -1))
	{
		str[i] = ch;						// 입력한 문자를 배열에 저장
		i++;
		ch = getchar();
	}
	str[i] = '\0';							// 문자열이 끝났음을 알리는 마침표 역할(Null 문자)

}
