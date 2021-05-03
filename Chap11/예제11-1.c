#include <stdio.h>

int main(void)
{
	char small, cap = 'G';					// char형 변수선언 초기화

	if ((cap >= 65) && (cap <= 'Z'))		// 대문자 범위라면
	{
		small = cap + ('a' - 65);			// 대/소문자의 차이를 더해 소문자로 변환 
	}										// 대문자'A' + 32(아스키코드 차이) = 소문자'a'

	printf("대문자 : %c %c", cap, '\n');	// '\n' %c로 출력하면 줄이 바뀐다.
	printf("소문자 : %c", small);

	return 0;
}