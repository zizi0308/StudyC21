#include <stdio.h>
/* ������ : ��ǥ���� ���� ���� �˰��� 
			������ �Ǿ��������� �������� ����ϸ� �� ������(������ ������� �������� ���������� �� ȿ����)
			1. ���ҵ� �߿��� pivot�� ����
			2. �� pivot�� �������� �տ��� ���� ��, �ڿ��� ū ������ ��ġ��Ų��.(����)
			3. ���ҵ� ���� ����Ʈ�� ��������� ���۽�Ų��(���� �˰����� ��� ������)(����) ū�� ���������� ���ҵ�
			4. ���ĵ� ����Ʈ���� �����Ѵ�.(����)*/

void quickSort(int*, int, int);
void swap(int* a, int* b);
void printArray(int* pary, int sz);

int main()
{
	int ary[] = { 3, 5, 2, 4, 7, 1, 6, 1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	quickSort(ary, 0, size - 1);
	
	return 0;
}
void quickSort(int* pary, int left, int right)
{
	if (left >= right) return; // ���ȣ���� �� ���� ���������� ������ ���ѷ����� ������
	int pivot = left;
	int lleft = pivot + 1;	   // 0�� �ε����� �ִ� pivot�� ���ذ����� �� ū ���� ��ƾ� �ϹǷ� (���ʺ��� �Ⱦ��)
	int lright = right;		   // �����ʺ��� �Ⱦ��

	while (lleft <= lright) { // �������� ���(lleft, lright)�� �� ��ȯ�ؼ� ��ȯ�� �ȵ� ������ ��ȯ
		while (pary[lleft] <= pary[pivot]) lleft++;		// ���̻� ��ȯ�� ���� ������ lleft�� �������� �̵����� �ڸ��� ��ӹٲ�
		while (pary[lright] >= pary[pivot] && lright > left) lright--;	// ��Ģ�� ����Ǵ� �͵��� ���ٸ� lright�� ���������� �̵����� �ڸ� ��ӹٲ�(�迭ũ�Ⱑ �����ʴ� ������ �������)

		if (lleft > lright) { // ������ ���� lright�� ū�ͺ��� ������ ������� ������ �ᱹ lright�� ������
			swap(&pary[lright], &pary[pivot]);
		}
		else {
			swap(&pary[lright], &pary[lleft]);
		}
	}
	for (int k = 0; k < right + 1; k++) {
		printf("%d  ", pary[k]);
	}
	quickSort(pary, left, lright - 1);		// ���ȣ��
	quickSort(pary, lright + 1, right);
}
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void printArray(int* pary, int sz)
{
	printf("\n0�ܰ� : ");

	for (int i = 0; i < sz; i++)
	{
		printf("%d   ", pary[i]);
	}
}