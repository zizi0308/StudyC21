#include <stdio.h>

void print_str(char** pps, int cnt);

int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };		// 1차원 배열은 포인터 1개가 기본(배열명이 포인터)
	int count;														// 1차원 배열인데 배열에 저장된 요소(자료형)의 타입이 포인터이기 때문에(포인터배열) 포인터를 하나 더 씀(이중 포인터)

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt)
{
	int i;

	for ( i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}