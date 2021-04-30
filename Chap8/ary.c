#include <stdio.h>

int main()
{
	int i;
	int ary[5] = { 10, 20, 30, 40, 50 };		// 배열의 주소와 for문만 생각
	int size = sizeof(ary) / sizeof(ary[0]);	// 20 / 4 = 5 >> size가 5!!!
	for ( i = 0; i <= size -1 ; i++)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	printf("\n");
	for ( i = size - 1; i >= 0 ; i--)			// 조건식 안에는 변수 뿐만 아니라 상수나 변수, 수식도 가능함
	{											//
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	return 0;
}