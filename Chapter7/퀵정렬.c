#include <stdio.h>
/* 퀵정렬 : 대표적인 분할 정복 알고리즘 
			정렬이 되어있지않은 구조에서 사용하면 더 빠르다(정렬이 어느정도 되있으면 삽입정렬이 더 효과적)
			1. 원소들 중에서 pivot을 고른다
			2. 고른 pivot을 기준으로 앞에는 작은 값, 뒤에는 큰 값들을 위치시킨다.(분할)
			3. 분할된 작은 리스트를 재귀적으로 동작시킨다(같은 알고리즘을 계속 동작함)(정복) 큰값 작은값으로 분할된
			4. 정렬된 리스트들을 결합한다.(결합)*/

void quickSort(int*, int, int);
void swap(int* a, int* b);
void printArray(int* pary, int sz);

int main()
{
	int ary[] = { 3, 5, 2, 4, 7, 1, 6, 1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	quickSort(ary, 0, size - 1);
	
	return 0;
}
void quickSort(int* pary, int left, int right)
{
	if (left >= right) return; // 재귀호출을 할 때는 기저조건이 없으면 무한루프에 빠진다
	int pivot = left;
	int lleft = pivot + 1;	   // 0번 인덱스에 있는 pivot을 기준값으로 더 큰 값을 잡아야 하므로 (왼쪽부터 훑어옴)
	int lright = right;		   // 오른쪽부터 훑어옴

	while (lleft <= lright) { // 보내버릴 놈들(lleft, lright)을 다 교환해서 교환이 안될 때까지 교환
		while (pary[lleft] <= pary[pivot]) lleft++;		// 더이상 교환할 것이 없으면 lleft를 왼쪽으로 이동시켜 자리를 계속바꿈
		while (pary[lright] >= pary[pivot] && lright > left) lright--;	// 규칙에 위배되는 것들이 없다면 lright를 오른쪽으로 이동시켜 자리 계속바꿈(배열크기가 넘지않는 범위로 만들어줌)

		if (lleft > lright) { // 엇갈릴 조건 lright는 큰것부터 작은것 순서대로 내려옴 결국 lright은 작은값
			swap(&pary[lright], &pary[pivot]);
		}
		else {
			swap(&pary[lright], &pary[lleft]);
		}
	}
	for (int k = 0; k < right + 1; k++) {
		printf("%d  ", pary[k]);
	}
	quickSort(pary, left, lright - 1);		// 재귀호출
	quickSort(pary, lright + 1, right);
}
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void printArray(int* pary, int sz)
{
	printf("\n0단계 : ");

	for (int i = 0; i < sz; i++)
	{
		printf("%d   ", pary[i]);
	}
}