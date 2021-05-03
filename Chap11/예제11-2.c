#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);
	// 2개의 문자를 연속입력 scanf는 공백이나 엔터도 인식하므로 쓸 때 주의하기
	// *주의* scanf("두 수를 입력하세요, %d%d", &a, &b); 
	// 이거 허용안됨 두 수를 입력하세요는 printf에 적쟈!!
	printf("[%c%c]", ch1, ch2);
	// 입력된 문자출력

	return 0;
}