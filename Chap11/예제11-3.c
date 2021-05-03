#include <stdio.h>

int main(void)
{
	int ch;						// 입력문자를 저장할 변수 입력문자 
								// 반환실패 시 -1로 변환되기 때문에 int형으로 출력
	ch = getchar();				// 함수가 반환하는 문자를 바로 저장
	printf("입력한 문자 : ");
	putchar(ch);				// 입력할 문자 출력 (문자열 출력은 gets, puts)
	putchar('\n');				// 개행 문자 출력

	return 0;
}