#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[5];

	ary[0] = 10;				// ù��° �濡 10
	ary[1] = 20;				// �ι�° �濡 20
	ary[2] = ary[0] + ary[1];	// ����° �濡 ù��° �ι�°�� ����
	scanf("%d", &ary[3]);		// &ary[3] >> ���������� �濡 ����־� �ٶ��� �ּҿ����ڰ� �ʿ���

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
}