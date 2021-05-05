#include <stdio.h>
#include <string.h>

int main(void)
{
	char p1;										// 값을 입력받기 위한 변수
	char p2;										// 값을 변경하기 위한 변수
	
		printf("알파벳을 하나를 입력하세요 : ");
		scanf("%c", &p1);							// 문자하나를 입력받음

		if ((p1 >= 'A') && (p1 <= 'Z'))				// p1이 대문자일때
		{
			p2 = p1 + ('a' - 'A');					// 대문자 아스키코드에 32('a' - 'A')를 더해 소문자로 변환
			printf("바뀐 문자 : %c\n", p2);			// 바뀐 문자 출력
		}
		else if ((p1 >= 'a') && (p1 <= 'z'))		// p1이 소문자일때
		{
			p2 = p1 - ('a' - 'A');					// 소문자 아스키코드에 32('a' - 'A')를 빼 소문자로 변환
			printf("바뀐 문자 : %c\n", p2);
		}
		else
		{
			printf("오류 : 알파벳 하나를 입력해주세요");
		}
		printf("\n");

	return 0;
}