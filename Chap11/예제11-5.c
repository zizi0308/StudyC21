#include <stdio.h>

int main(void)
{
	int res;						// scanf 함수의 반환값을 저장할 변수
	char ch;

	while (1)						// 무한반복
	{
		res = scanf("%c", &ch);		// 문자 입력, <Ctrl> + <Z> 엔터, <Ctrl> + <Z> 누르면 -1 반환
		if (res == EOF) break;		// 반환값이 -1이면 반복 종료 (EOF = -1)
		printf("%d ", ch);
	}

	return 0;
}