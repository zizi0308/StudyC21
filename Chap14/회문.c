#include <stdio.h>
#include <string.h>		// 문자열 관련 함수(strlen)를 사용하기위한 헤더파일 포함 

int main(void)
{
	char str[10];		// char형 요소 10개의 배열선언
	int i;				// 반복횟수를 세기 위한 제어 변수
	int str_len;		// 문자열 길이를 표현하기 위한 변수
	
	printf("문자열을 입력하세요 : ");	// 처음 입력을 하기위한 안내
	scanf("%s", str);					// 문자열로 입력받기 위해서 %s사용, 배열명은 주소이름이므로 주소연산자 필요없음
	
	str_len = strlen(str);				// 문자열의 길이를 표현하는 방법				
	// 이게 위쪽에 있으면 입력받은 문자열이 아닌 char str[10]의 길이를 표현하므로 여기 있어야 함
	
	for ( i = 0; i < str_len / 2; i++)	// 문자열과 문자열이 대칭으로 바뀌기 때문에 절반만 루프를 돌림
	{
		if (str[i] != str[str_len - i - 1])	// 처음과 끝의 문자열이 같지 않다면		
		// str[str_len - i - 1] 인 이유 >> 전체(str_len)의 반(str_len / 2)을 쪼개서 배열 -1만큼 나타낸다(문자열의 마지막값은 null이므로)
		{
			//printf("%c %c", str[0], str[str_len - i -1]); // 첫문자가 잘 들어갔는지 확인하기 위해 씀
			printf("%s(은)는 회문이 아닙니다.", str);
			break; // for문이므로 반드시 break있어야 함 없을 시 회문아닙니다 반복적으로 뜸
		}
		printf("회문입니다.");
	}
	return 0;
}