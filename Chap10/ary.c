#include <stdio.h>

int main()
{
	int a = 10;							// 자동변수 선언(지역변수)
	int* pa;							// 포인터 변수 선언(* 포인터임을 나타내는 기호이다)
	pa = &a;							// 포인터 변수에 변수 a의 주소를 저장한다.(포인터 pa는 a를 가리킨다)
	int ary[] = { 1, 2, 3, 4, 5 };
	int* pary = ary;					// 배열이름 자체가 주소값이므로 이렇게 사용
	int i;

	printf("변수 a에 저장된 값 : %d\n", a);
	printf("변수 a의 주소 : %p\n", &a);
	printf("포인터 변수 pa에 저장된 값 : %p\n", pa);
	printf("변수 a 에 저장된 값 : %d\n", *pa);			// * 는 간접참조연산자이다.

	for ( i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\n", i, ary[i]);			// 배열의 입출력을 받기 위해서는 for문을 쓴다
		ary[i]++;										// 배열출력 후 배열 요소 증가시킴
	}
	printf("\n");
	for ( i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\n", i, pary[i]);			// 포인터에 배열 연산식을 통해 출력
		pary[i]++;
	}
	printf("\n");
	for ( i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\n", i, *(pary + i));		// 포인터 연산식을 통해 출력
	}

	return 0;
}
