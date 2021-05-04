#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "straw";			// 방을 넉넉하게 잡아놓음(문자열을 더하기 때문에 메모리 침범가능성)

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}