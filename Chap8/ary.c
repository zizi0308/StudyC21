#include <stdio.h>

int main()
{
	int i;
	int ary[5] = { 10, 20, 30, 40, 50 };		// �迭�� �ּҿ� for���� ����
	int size = sizeof(ary) / sizeof(ary[0]);	// 20 / 4 = 5 >> size�� 5!!!
	for ( i = 0; i <= size -1 ; i++)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	printf("\n");
	for ( i = size - 1; i >= 0 ; i--)			// ���ǽ� �ȿ��� ���� �Ӹ� �ƴ϶� ����� ����, ���ĵ� ������
	{											//
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	return 0;
}