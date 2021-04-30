#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소크기 : %d\n", sizeof(&ch));				// 주소와 포인터의 크기는 4byte로 고정적
	printf("int형 변수의 주소크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소크기 : %d\n", sizeof(&db));

	printf("char형 포인터의 크기 : %d\n", sizeof(pc));
	printf("int형 포인터의 크기 : %d\n", sizeof(pi));
	printf("double형 포인터의 크기 : %d\n", sizeof(pd));

	printf("char형 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));	// 저장공간은 자료형에 따라 크기가 달라진다
	printf("int형 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double형 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

	return 0;
}