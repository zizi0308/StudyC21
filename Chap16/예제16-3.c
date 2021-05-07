#include <stdio.h>
#include <stdlib.h>
// 이 코드의 문제점 : 메모리 누수에 대한 대비가 없다
int main(void)
{
	int* pi;
	int size = 5;							
	int count = 0;
	int num;
	int i;

	pi = (int *)calloc(size, sizeof(int));				// 동적으로 할당받은 메모리를 자동으로 0으로 초기화시키는 함수
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)
		{
			size += 5;									// 사이즈가 다 차면 다시 5를 늘림
			// pi_back = pi;
			pi = (int*)realloc(pi, size * sizeof(int));	// 기존(pi)에 할당받은 메모리의 저장공간의 크기를 조절할 수 있는 함수
			// if (pi == NULL) {pi = pi_back}			// 메모리 누수에 대한 대비
		}												// 기존에 있던 메모리에 늘릴 메모리를 붙여서 만드는데, 이 공간이 차면 다른 주소값이 있는 곳에서 복사해서 사용하며 메모리를 할당받음(재할당) << 정상적인 상태
		pi[count++] = num;								// 하지만 힙영역 메모리가 가득차서 할당을 못 받는다면 NULL포인터가 전달되고, 기존에 저장했던 주소값 포인터를 잃어버리게 된다. 
	}													// 이(NULL포인터가 반환되는 것)를 대비하기 위해 pi백업 변수를 설정, 임시포인터(pi_back)를 만들어서 NULL이 된다면 기존에 만들었던 것만 *pi로 다시 돌려준다.
	for ( i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}