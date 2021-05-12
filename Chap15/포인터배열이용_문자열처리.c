#include <stdio.h>

void main(void)
{
	int i;
	char* ptrArray[4] = { {"Korea"}, {"Seoul"}, {"Mapo"}, {"152번지 2 / 3"} };	// 방 4개 값 입력
	for ( i = 0; i < 4; i++)
	{
		printf("\n %s", ptrArray[i]);		// 문자열 형태로 출력
	}

	ptrArray[2] = "Jongno";					// 2번방의 값을 바꿈 포인터 변수이기 때문에 문자열자체 저장가능
	printf("\n\n");
	for ( i = 0; i < 4; i++)
	{
		printf("\n %s", ptrArray[i]);		// 바뀐 문자열 출력
	}

	getchar();

}