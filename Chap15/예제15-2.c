#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);			// 메인함수가 포인터 변수에 저장되어있기 때문에 (일반함수에는 그냥 포인터만 씀)
												// 포인터 기호를 하나 더 써서 이중포인터를 쓴다
int main(void)
{
	char* pa = "success";						// 포인터 변수에 저장됨
	char* pb = "failure";					

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);							// 함수를 실행시키기 위해 주소값으로 받음
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;									// 포인터 변수를 선언
	pt = *ppa;									// ppa의 간접참조를 함 (결국 얘는 pa의 데이터값 "success")
	*ppa = *ppb;									
	*ppb = pt;
}