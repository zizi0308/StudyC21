#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;									// 최댓값을 저장할 변수
	int size = sizeof(ary) / sizeof(ary[0]);	// 배열의 요소와 개수 계산

	input_ary(ary, size);						// 배열에 값 입력
	max = find_max(ary, size);					// 배열의 최댓값 반환
	printf("배열의 최댓값 : %.1fl\n", max);

	return 0;
}

void input_ary(double* pa, int size)			// double 포인터를 매개변수로 선언(배열로 선언해도 되는데 컴파일러가 포인터로 바꿔버리니까 그냥 포인터로 선언함 p289)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for ( i = 0; i < size; i++)					// size의 값에 따라 반복횟수 결정
	{
		scanf("%lf", pa + 1);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];								// 첫번째 방에 있는 데이터를 max라고 임의지정 
	for (i = 1; i < size; i++)					// 방과 방들을 계속 비교
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;									// 최댓값 반환

}