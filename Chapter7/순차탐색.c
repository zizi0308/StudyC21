#include <stdio.h>

int LSearch(int* pary, int sz, int tg)		// 순차탐색(배열은 포인터로 받음)
{
	int i;
	for ( i = 0; i < sz; i++) {	
		if (pary[i] == tg) return i;
	}
	return -1;		// 아닐 때
}

int main()
{
	int index;
	int ary[] = { 3, 5, 8, 2, 7, 6, 1 };
	int size = sizeof(ary) / sizeof(ary[0]); //	전체크기 / 방 하나의 크기
	index = LSearch(ary, size, 10);			 // 배열, 배열사이즈, 배열 수
	if (index == -1) {
		printf("검색결과를 찾을 수 없습니다.\n");
	}
	else {
		printf("검색결과는 %d 입니다\n", index);
	}
	return 0;
}