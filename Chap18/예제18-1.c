#include <stdio.h>

int main(void)
{
	FILE* fp;							// 파일구조체(헤더파일에 정의가 되있음)

	fp = fopen("a.txt", "r");			// fp는 파일에 있는 버퍼의 주소가 저장되어있음, fopen함수가 호출되면 stream파일(파일구조체, 버퍼 등)이 만들어지고, 거기있는 데이터를 버퍼를 통해 읽게할 수 있다.
	if (fp == NULL)						// 버퍼에 있는 주소값이 없다 = 파일이 없다.
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;						
	}
	printf("파일이 열렸습니다.\n");
	fclose(fp);							// 파일을 닫아줘야 함(메모리 자원에 문제가 생길 수 있다)

	return 0;
}