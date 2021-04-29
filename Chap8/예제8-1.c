#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[5];

	ary[0] = 10;				// 첫번째 방에 10
	ary[1] = 20;				// 두번째 방에 20
	ary[2] = ary[0] + ary[1];	// 세번째 방에 첫번째 두번째방 더함
	scanf("%d", &ary[3]);		// &ary[3] >> 개별적으로 방에 집어넣어 줄때는 주소연산자가 필요함

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
}