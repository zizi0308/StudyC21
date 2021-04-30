#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;						// 3번방의 주소를 넣음

	printf("pa : %u\n", pa);				// 0번방
	printf("pb : %u\n", pb);				// 3번방
	pa++;
	printf("pb - pa : %u\n", pb - pa);		// 3번방 - 1번방

	printf("앞에 있는 배열요소 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}