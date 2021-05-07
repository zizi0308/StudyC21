#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_str(char** ps);							// 입력(이중 포인터)은 있고 출력은 없는 함수

int main(void)
{
	char temp[80];									// 임시 배열 선언
	char* str[21] = { 0 };							// 현재 널포인터로 초기화된 포인터 배열, 포인터 배열은 입력으로 사용하려면 이중포인터로
	int i = 0;

	while (i < 20)									// while문을 for문처럼 바꾸려면 조건식이 오고, 그 다음에 증감식이 위치하게 만들면된다.
	{
		printf("문장을 입력하세요 : ");
		gets(temp);									// 문자열전용 함수인 gets는 띄어쓰기가 된다.
		if (strcmp(temp, "end") == 0) break;		// 문자열 2개를 비교하는 함수인 strcmp, temp와 "end"의 문자열이 같다면 가장 가까운 반복문 1개를 빠져나옴
		str[i] = (char*)malloc(strlen(temp) + 1);	// malloc을 통해 동적할당을 받고 있음, 문자열의 길이를 구하는 strlen함수 문자열길이 + 1의 + 1은 Null문자임
		strcpy(str[i], temp);						// temp에 있는 문자열을 복사해서 저장시킴
		i++;										// i증가 i = 1이 되므로 다시 13행으로 돌아감
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}
	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL)								// ps에 있는 데이터값을 출력 (ps의 실질적인 값은 주소값이다(NULL이 있기때문에))
	{
		printf("%s\n", *ps);
		ps++;
	}
}