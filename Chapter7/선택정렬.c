#include <stdio.h>
/* �������� : 0������ �ּҰ��̶�� �����ϰ� ������ ���ҵ�� ���Ͽ� ��ü�Ѵ�. ���� ���ȣ�� �ϳ��� �÷��� ��� �ּڰ��� ã�� ���� �ݺ� */

void selectionSort(int*, int);

int main()
{
	int ary[] = { 4, 2, 7, 5, 9, 1, 8, 3, 6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	selectionSort(ary, size);
	return 0;
}
void selectionSort(int* pary, int size)
{
	int i, j, k, min = 0;
	int temp;
	for ( i = 0; i < size - 1; i++) {
		min = i;								// 0������ ���� �ּҰ�
		for ( j = i + 1; j < size; j++)	{		// 0������ ������ ������ ����� �� j�� ���������� �����鼭 ����
			if (pary[min] > pary[j]) min = j;	// ���Ϸ��� ������ j���� ������ j�� �񱳰��� ��ġ�� �ٲ� 
		}
		temp = pary[min];						// �ּҰ��� ������ �Ǵ� ���� swap
		pary[min] = pary[i];
		pary[i] = temp;
		printf("\n %d �ܰ� : ", i + 1);
		for (k = 0; k < size; k++) {
			printf("%d  ", pary[k]);
		}
		
	}
}