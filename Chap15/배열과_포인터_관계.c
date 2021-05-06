#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);				// 실행하면 동일한 주소값 출력
	printf("=========================================\n");
	
	int ary1[2] = { 1, 2 };
	//char* pary1 = ary1;					// 다른타입의 포인터에 집어넣는 것은 상관없음 하지만 다른주소를 가리키고 있기 때문에 동일한 값이 나올 수 없다
	int* pary1 = ary1;
	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n", ary1 + 1, pary1 + 1);	// 배열로 전달 포인터로 연산 >> 이 두개는 동일한 값을 가지고 있음
	printf("=========================================\n");
	
	char ary2[2] = { 'a', 'b' };
	char pary2 = ary2;
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n", ary2 + 1, pary2 + 1);
	printf("=========================================\n");
	
	int ary3[][2] = { { 1, 2 }, { 3, 4 } };
	// int pary3 = ary3;
	int (*pary3)[2] = ary3;					// 배열포인터 쓸때는 자료형다음에 한 칸 띄워서 쓰는게 보기쉬움
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n", ary3 + 1, pary3 + 1);
	// 배열을 포인터로하면 +1을 해도 동일한 주소값이 나와야 한다고 생각하는데 주소값이 다르게 나온다. 이를 
	printf("=========================================\n");
	
	char* ary4[2] = { "hi", "good" };		// 포인터배열 (포인터니까 포인터 배열이니까 포인터)
	// char* pary4 = ary4; 다른 주소값이 출력됨 단일포인터로 가리키면 주소값이 같게 안나옴
	char **pary4 = ary4;					// 위의 주소값이 다르게 출력되므로 배열에 포인터를 쓴다 >>  자료형의 타입이 포인터이기 때문에 포인터를 써서 주소값을 가져온다.
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n", ary4 + 1, pary4 + 1);
	return 0;
}