#include <stdio.h>
int a = 10, b = 20;		// 전역변수 >> 가급적 사용X
void swap();

int main()				// 지역변수
{
	//int temp;
	printf("바꾸기전 a, b : %d, %d\n", a, b);
	/*temp = a;
	a = b;
	b = temp;*/
	swap();
	printf("바뀐 후 : a, b : %d, %d\n", a, b);

	return 0;
}
void swap()			// main의 값을 복사해서 씀 main과 같은 변수가 아님
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}