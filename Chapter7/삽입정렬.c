#include <stdio.h>
/* 삽입정렬 : 두번째 자료부터 앞 자료(뒤에서 앞으로)를 비교하여 정렬한다 */

void insertArr(int*, int);
int main()
{
	int ary[] = { 4, 2, 7, 5, 9, 1, 8, 3, 6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	insertArr(ary, size);
	//printAry(ary, size);
	return 0;
}
void insertArr(int* pary, int sz)
{
	int i;								// 비교하는 인덱스를 지정하기 위한 i 
	int j, k;							// 바로 앞뿐만아니라 앞의 전체 인덱스들을 비교하기위한 j
	int temp;							// swap을 위한 임시저장소
	for ( i = 1; i < sz; i++) {			// 두번째 값부터 비교가 시작되므로 인덱스가 1부터 시작해야 함, 전체 배열개수만큼 실행
		for ( j = i; j > 0; j--) {		// j가 왼쪽으로 이동해야 하므로 점점감소됨
			if (pary[j] < pary[j - 1]) {
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}
		printf("\n%d 단계 : ", i);
		for ( k = 0; k < sz; k++) {
			printf("%d  ", pary[k]);
		}
	}
}
void printAry(int* pary, int sz)
{
	int i;
	for ( i = 0; i < sz; i++) {
		printf("ary[%d] = %d\n", i, pary[i]);
	}
}