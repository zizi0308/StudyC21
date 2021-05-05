#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int* pa, int size);
void swap_ary(int *pa, int size);
void print_ary(int* pa, int size);


int main(void)
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);		// 10개, 배열요소의 개수를 계산하기 위해 씀
	input_ary(ary, size);							// 값을 입력받기 위한 함수
	swap_ary(ary, size);							// 값을 역순으로 바꾸기 위한 함수
	print_ary(ary, size);							// 역순으로 바꾼 값을 출력하기 위한 함수
	printf("\n");									// 개행
	return 0;										// 메인 함수를 종료
}

void input_ary(int* pa, int size)
{
	int i;											// 반복문을 제어하기위한 변수

	printf("%d개의 정수값 입력 : ", size);			// 정수값을 입력받기 위해 넣음 size만큼 입력해야 함

	for ( i = 0; i < size; i++)						// ary[0] 부터 ary[size-1]까지의 배열을 출력 
	{
		scanf("%d", &pa[i]);						// 입력할 배열요소의 주소 전달(pa + i)도 가능
	}
}

void swap_ary(int* pa, int size)
{
	int temp;								// 값을 저장할 임시저장소
	int i;									// 반복문을 제어하기 위한 변수
	int j;									// 입력한 숫자배열을 역순대로 출력하기 위한 제어변수

	for (i = 0; i < size / 2; i++)			// 반만 바꾸면 역순으로 바뀜 전부 바꾸면 다시 원상복구되니까 /2를 함
	{										// 숫자와 숫자가 서로 대칭인지를 봐야 하므로
		j = size - i - 1;					// 배열의 끝으로 가기위해 
		temp = pa[i];						// 임시저장변수에 pa[i]를 저장
		pa[i] = pa[j];						// 배열요소의 교환, 첫번째 배열요소와 마지막 배열요소의 교환부터 순차적으로 이루어짐
		pa[j] = temp;						// 교환 된 배열들을 다시 임시 저장소에 저장
	}
}
void print_ary(int* pa, int size)
{
	int i;
	
	for ( i = 0; i < size; i++)				// pa[0]부터 pa[i-1]까지의 배열요소 돌면서
	{
		printf("%d ", pa[i]);				// 각 배열 요소들을 출력
	}
}