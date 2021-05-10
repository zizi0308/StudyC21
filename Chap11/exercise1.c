#include <stdio.h>

/*키보드로 입력한 문장에서 소문자 개수세어 출력하기*/

int main(void)
{
	int ch;				// 문자를 입력 할 변수
	int cnt = 0;		// 소문자의 개수를 셀 변수
	ch = getchar();

	while (ch != '\n')
	{
		if ( (ch >= 'a') && (ch <= 'z')) cnt++;
		ch = getchar();
	}

	printf("소문자의 개수 : %d", cnt);

	return 0;
}