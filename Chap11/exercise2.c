#include <stdio.h>

/* 키보드로 입력한 단어 중 길이가 가장 긴 단어를 출력하세요. 한줄에 하나의 단어만 입력하며,
   ctrl + z를 누를 때까지 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력합니다. 배열사용X */

int main(void)
{
	int ch;
	int len;					// 단어길이의 개수를 저장할 변수
	int max = 0;				// 가장 긴 단어길이를 저장할 변수

	while (1)					// 무한반복문
	{
		len = 0;
		ch = getchar();							// 문자 입력받는다.

		while ((ch != -1) && (ch != '\n'))		// ch가 파일의 끝이 아니고, 개행이 아닐때까지 !!반복!!
		{
			len++;								// 단어길이의 개수를 센다
			ch = getchar();						// 문자하나하나 센다.
		}
		if (ch == -1) break;					// ch가 파일의 끝이면, 종료
		if (len > max) max = len;				// 문자의 길이가 가장 긴 문자보다 길다면 그걸 저장한다.
	}											// 순서중요!!!!! r value l value 바뀌면 계산 안됨,,,
	
	printf("가장 긴 단어의 길이 : %d\n", max);

	return 0;
}