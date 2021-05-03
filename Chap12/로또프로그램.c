#include <stdio.h>
void input_lotto(int* pa, int size);
void print_lotto(int* pa, int size);

int main(void)
{
	int lotto[6];
	int size = sizeof(lotto) / sizeof(lotto[0]);			// 배열 요소의 개수 계산
	input_lotto(lotto, size);
	printf("\n");
	return 0;
}

void input_lotto(int* pa, int size)
{
	int num;
	int lotto[6];
	int p = 0;												// 입력한 배열을 담을 곳
	
	printf("로또번호를 입력하세요 : ");
	for (num = 0; num < size; num++)
	{
		scanf("%d", &lotto[num]);
	}

	for (int num = 0; num < size; num++) 
	{	// 배열에 대하여 중복이 없는 것들만 배열에 담는다.
		int p = 0;
		//중복검사
		while (p < num && lotto[p] != lotto[num]) p++;		// 입력한 배열 수가 num보다 작고  
		if (p == num)	//중복이 없다면						// 두 배열이 같지않으면 계속 반복한다.
		{	
			pa[num] = lotto[p];
		}
		else {
			printf("중복 존재");
			return;
		}
	}
	print_lotto(pa, size);
}

void print_lotto(int* pa, int size)
{
	int num;
	printf("입력하신 로또번호는 :");
	for (num = 0; num < size; num++)
	{
		printf("%d ", pa[num]);								// 배열요소들을 차례로 출력
	}
	
}