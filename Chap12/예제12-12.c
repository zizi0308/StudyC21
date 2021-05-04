#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일이름 : ");
	if (strcmp(str1, str2) > 0)						// str1이 str2보다 크면(사전에 나중에 나오면)
		printf("%s\n", str1);						// str1 출력 (앞이 크면 양수 뒤가크면 음수 같으면 0)
	else
		printf("%s\n", str2);


	return 0;
}