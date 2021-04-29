/*#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");			// apple 하나출력	// apple 둘출력		// apple 셋출력
	if (count == 3) return;		// 거짓 밑으로		// 거짓 밑으로		// 참
	fruit(count + 1);			// fruit(2)			// fruit(3)			// main으로 올라감
	printf("jam\n");			// jam 실행			// jam 실행
}*/