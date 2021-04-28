#include <stdio.h>

int main()
{
	int a = 10;							// p110 참고
	int b = 12;
	char ch =  128;					// 0b 1000 0000 (0b는 이진수를 표현) 
	unsigned char ch1 = 128;			// 양수는 부호비트의 값이 0

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);	// 좌측이동은 빈비트는 0으로 채워짐
	printf("a >> 2 : %d\n", a >> 2);
	printf("ch >> 1 : %d", ch >> 1);
	printf("ch1 >> 1 : %d", ch1 >> 1);	// 0b 1100 0000 (부호비트가 1이면 1 0이면 0을 따르게된다)
										// 맨 왼쪽에 있는 값이 부호비트의 값(자료형의 맨 첫번째 값)
	
	// a >> 1일때 이동 후 맨 앞 비게된 공간은 부호비트의 값을 따라 빈값이 채워진다

	return 0;
}