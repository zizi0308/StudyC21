#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;
	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*minp < *midp) swap(minp, midp);	// swap(*minp, *midp) 해도 큰순으로 출력 안되는 이유 : 출력하는 기능을 함수로 만들고 호출을 한다면
	if (*midp < *maxp) swap(midp, maxp);	// func(*p)와 func(p) 둘다 가능, 전자는 a의 값을 넘겨주는 것 후자는 a의 주소값을 넘겨주는 것 
	if (*maxp < *minp) swap(maxp, minp);	// 단지 값을 출력하는 기능의 함수라면 둘 다 사용가능, 하지만 swap처럼 원본 값에 변화를 주는 함수라면
}											// 반드시 포인터를 직접 사용 why? !*p와 같이 인수를 사용하면 a값의 복사본이 넘어가므로 절대 a값 변화X! 

// 별 연산자는 포인터가 가리키는 값을 구하는 연산자가 아닌, 포인터가 가리키는 변수를 사용할 수 있게 해주는 연산자!!!

// line_up 함수에서 swap함수를 호출할 때 바꾸고자 하는 대상이 main 함수의 max, mid, min이므로 swap 함수를 호출할 때는 원래 swap(&max, &mid); 와 같이 사용해야 함.
// 하지만 line_up 함수에서 main 함수의 이름인 max, mid, min을 사용할 수 없으니 대신 그 주소를 갖고 있는 maxp, midp, minp를 사용하는 것임
// 따라서 maxp, midp, minp를 사용할 때 swap(maxp, midp); 와 같이 그 값을 그대로 swap 함수에 줘야 함.
// maxp와 midp가 바꾸고자 하는 대상인 max와 mid의 주소를 갖고 있기 때문.