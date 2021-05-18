#include <stdio.h>
/* �������� : �ι�° �ڷ���� �� �ڷ�(�ڿ��� ������)�� ���Ͽ� �����Ѵ� */

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
	int i;								// ���ϴ� �ε����� �����ϱ� ���� i 
	int j, k;							// �ٷ� �ջӸ��ƴ϶� ���� ��ü �ε������� ���ϱ����� j
	int temp;							// swap�� ���� �ӽ������
	for ( i = 1; i < sz; i++) {			// �ι�° ������ �񱳰� ���۵ǹǷ� �ε����� 1���� �����ؾ� ��, ��ü �迭������ŭ ����
		for ( j = i; j > 0; j--) {		// j�� �������� �̵��ؾ� �ϹǷ� �������ҵ�
			if (pary[j] < pary[j - 1]) {
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}
		printf("\n%d �ܰ� : ", i);
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