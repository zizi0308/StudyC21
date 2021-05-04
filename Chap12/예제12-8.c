#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");					// 복사할 내용(원본)에 배열, 포인터, 
	printf("바뀐 문자열 : %s\n", str1);		// 문자열상수 등 상관없이 올 수 있다.


	return 0;
}