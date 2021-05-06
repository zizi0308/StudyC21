#include <stdio.h>
#include <stdlib.h>								// malloc, free 함수 사용을 위한 헤더파일
												// malloc을 사용하면 Heap영역을 사용하여 동적할당을 할 수 있다.
int main(void)
{
	int* pi;									// 동적 할당 영역을 연결할 포인터 선언(9행에서 이미 주소값을 return 해야된다는 것을 알 수 있음)
	double* pd;

	pi = (int*)malloc(sizeof(int));				// int형 크기로 동적할당 int형을 할당 받았다고 명시적으로 써줌 >> (int*)malloc >> void타입이라 강제 형변환, malloc(할당받은 주소를 return시켜줌), 리스트에 잘 활용됨
	if (pi == NULL)								// NULL은 아무것도 못가리키는 포인터(return이 없음) >> 주소값이 return 안됨
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1);								// 1 : 강제종료
	}	// NULL인지 아닌지 판별하는 구문이 없어서 역참조 경고 뜸

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);		// 동적 할당 영역에 저장 된 값 출력
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);									// 동적 할당 영역에 반환, 만약 free를 통해 영역을 해제해주지 않으면 계속 남아있음
	free(pd);

	return 0;
}