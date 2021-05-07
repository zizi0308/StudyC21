#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char temp[80];
	char* str[3];									// 포인터 배열선언
	int i;

	for ( i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);									//문자열 전용함수
		str[i] = (char *)malloc(strlen(temp) + 1);	// 메모리 동적할당
		strspy(str[i], temp);						// strspy를 통해 입력한 값을 복사해서 사용
	}

	for ( i = 0; i < 3; i++)						// 메모리 동적할당 받은게 3개 이므로
	{
		printf("%s\n", str[i]);
	}

	for ( i = 0; i < 3; i++)						// 해제도 for문을 통해 해제(할당받은 영역을 갯수만큼 해제)
	{
		free(str[i]);
	}

	return 0;
}