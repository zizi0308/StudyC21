#include <stdio.h>
#include <string.h>					// strncpy 함수 사용을 위한 헤더파일 포함

int main(void)
{
	char str[20] = "mango tree";	// 배열 초기화
		
	strncpy(str, "apple-pie", 5);	// apple-pie에서 다섯문자만 복사(앞에서부터 5개 apple)
	str[5] = '\0';					// apple tree에서 tree를 없애고 싶다면 뒤에 널문자를 붙여준다
	printf("%s\n", str);			// 복사받은 문자열 출력

	return 0;
}