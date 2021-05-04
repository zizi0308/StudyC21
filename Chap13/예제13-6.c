#include <stdio.h>

void add_ten(int a);

int main(void)
{
	int a = 10;					// 메인영역

	add_ten(a);					// a값을 복사하여 전달(값을 전달하는 형태는 값을 변형할 수 없다)
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
}