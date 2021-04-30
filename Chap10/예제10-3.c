#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for ( i = 0; i < 3; i++)
	{
		printf("%d ", *pa);		// pa가 가리키는 배열요소 출력
		pa++;					// 다음 배열요소를 가리키도록 pa값 증가
	}							// 포인터는 변수이기 때문에 증감연산이 가능하다
	
	return 0;
}