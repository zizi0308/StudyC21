#include <stdio.h>

int main(void)
{
	char str[20] = "Data Structure!";
	int cnt = 0;
	int i;
	printf("\n문자배열 str[] : ");
	
	for ( i = 0; str[i]; i++)		// 조건식에 배열이 들어가있음
	{
		printf("%c", str[i]);
		cnt++;
	}
	printf("%d\n", cnt);			// 문자열의 길이를 나타냄
	getchar();
	
	

	return 0;
}