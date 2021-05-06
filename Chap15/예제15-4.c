#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary의 값 : %u\t", ary);		// 배열 첫번째 방 시작주소
	printf("ary의 주소 : %u\n", &ary);		// 배열 !전체!의 시작주소 
	printf("   ary + 1 : %u\t", ary + 1);	// 배열 두번째 방 시작주소 
	printf("  &ary + 1 : %u\n", &ary + 1);	// 배열전체 크기 + 1, 실질적으로 이런형태는 잘 안씀 + 1 배열에 할당되어있는 그 다음 메모리를 모르기때문에

	return 0;
}