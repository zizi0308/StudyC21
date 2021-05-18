#include <stdio.h>
/* 선택정렬 : 0번방을 최소값이라고 가정하고 나머지 원소들과 비교하여 교체한다. 이후 방번호를 하나씩 늘려서 계속 최솟값을 찾는 것을 반복 */

void selectionSort(int*, int);

int main()
{
	int ary[] = { 4, 2, 7, 5, 9, 1, 8, 3, 6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	selectionSort(ary, size);
	return 0;
}
void selectionSort(int* pary, int size)
{
	int i, j, k, min = 0;
	int temp;
	for ( i = 0; i < size - 1; i++) {
		min = i;								// 0번방이 가장 최소값
		for ( j = i + 1; j < size; j++)	{		// 0번방을 제외한 나머지 방들을 비교 j가 오른쪽으로 나가면서 비교함
			if (pary[min] > pary[j]) min = j;	// 비교하려는 값보다 j값이 작으면 j와 비교값의 위치를 바꿈 
		}
		temp = pary[min];						// 최소값과 기준이 되는 값을 swap
		pary[min] = pary[i];
		pary[i] = temp;
		printf("\n %d 단계 : ", i + 1);
		for (k = 0; k < size; k++) {
			printf("%d  ", pary[k]);
		}
		
	}
}