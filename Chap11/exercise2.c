#include <stdio.h>

/* 키보드로 입력한 단어 중 길이가 가장 긴 단어를 출력하세요. 한줄에 하나의 단어만 입력하며,
   ctrl + z를 누를 때까지 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력합니다. 배열사용X */

int main(void)
{
	int ch;
	int len = 0;				// 단어길이의 개수를 저장할 변수
	int max = 0;				// 가장 긴 단어길이를 저장할 변수
	ch = getchar();

	//while (1)
	//{
		if (ch != -1 && len != '\n')
		{
			ch = getchar();
			len++;
		}
		if (ch == -1) //break;
	//}
	if (len < max) len = max;
	printf("가장 긴 단어의 길이 : %d", max);

	return 0;
}