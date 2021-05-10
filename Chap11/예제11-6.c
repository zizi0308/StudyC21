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
	while ((ch != '\n') && (i < size -1))   // ch가 개행이 아니고 반환값이 사이즈 -1일 때(배열의 크기만큼 입력) 
	{
		str[i] = ch;						// 입력한 문자를 배열에 저장
		i++;								// 첨자증가	
		ch = getchar();						// 새로운 문자입력
	}
	str[i] = '\0';							// 문자열이 끝났음을 알리는 마침표 역할(Null 문자)

}
