#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;						// 3������ �ּҸ� ����

	printf("pa : %u\n", pa);				// 0����
	printf("pb : %u\n", pb);				// 3����
	pa++;
	printf("pb - pa : %u\n", pb - pa);		// 3���� - 1����

	printf("�տ� �ִ� �迭��� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}