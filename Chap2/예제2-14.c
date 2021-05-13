#include <stdio.h>

long int fact(int);		// 출력 long 입력 int

void main(void) {
	int n, result;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);											// 정수를 가져옴
	result = fact(n);											// 값을 가져오면서 함수호출
	printf("\n\n %d의 팩토리얼 값은 %ld입니다.\n", n, result);	// n에 정수 값저장
	getchar(); getchar();	// n, result
}

long int fact(int n) {
	int value;
	if (n <= 1) { // 기저조건 (재귀함수는 무한반복을 막기위한 기저조건 필요)
		printf("\n fact(1) 함수호출!");
		printf("\n fact(1) 값 반환!!");
		return 1;
	}
	else {
		printf("\n fact(%d) 함수호출!", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) 값 %ld 반환!!", n, value);
		return value;
	}
}