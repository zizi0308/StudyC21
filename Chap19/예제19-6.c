#include <stdio.h>
#define VER 7
#define BIT16

int main(void)
{
	int max;

#if VER >= 6								// #ifdhk #endif
	printf("버전 %d입니다.\n", VER);
#endif

#ifdef BIT16								// BIT16이 정의되어 있으면 (#ifndef 정의되어있지 않으면)
	max = 32767;							// 이걸 실행하고
#else										// 아니면
	max = 2147483647;						// 이걸 실행해라
#endif

	printf("int 변수형의 최댓값 : %d\n", max);

	return 0;
}