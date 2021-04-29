/*#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");				// 재귀함수는 기저조건이 없으면 무한반복된다.
	if (count == 3) return;			// 기저조건 만약 카운트가 3이면 리턴해라(반환하고 끝낸다)
	fruit(count + 1);				// 조건 만족안할 때 횟수 1증가 이후 다시 line 12로감
}*/