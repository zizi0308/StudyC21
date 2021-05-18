#include <stdio.h>

int BSearch(int* pary, int sz, int tg)
{
	int first = 0;
	int last = sz - 1;
	int mid;

	while (first <= last) {	// first가 항상 last보다 작아야 하므로
		mid = (first + last) / 2;
		if (tg == pary[mid]) return mid;			// mid값이 찾는 값이라면 바로 mid리턴
		else {
			if (tg > pary[mid]) first = mid + 1;	// 찾고자 하는 타겟이 mid보다 크다면 mid+1 부터 last까지 검색
			else last = mid - 1;					// 찾고자 하는 타겟이 mid보다 작다면 first부터 mid-1까지 검색
		}
	}
	return -1;		// 검색값이 없다면 -1 반환
}
int main()
{
	int ary[] = { 1, 2, 3, 5, 6, 7, 8 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int index;

	index = BSearch(ary, size, 2);
	if (index == -1){
		printf("검색결과를 찾을 수 없습니다.\n");
	}
	else {
		printf("방번호는 %d 입니다\n", index);
	}
	return 0;
}