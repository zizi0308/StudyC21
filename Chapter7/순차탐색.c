#include <stdio.h>

int LSearch(int* pary, int sz, int tg)		// ����Ž��(�迭�� �����ͷ� ����)
{
	int i;
	for ( i = 0; i < sz; i++) {	
		if (pary[i] == tg) return i;
	}
	return -1;		// �ƴ� ��
}

int main()
{
	int index;
	int ary[] = { 3, 5, 8, 2, 7, 6, 1 };
	int size = sizeof(ary) / sizeof(ary[0]); //	��üũ�� / �� �ϳ��� ũ��
	index = LSearch(ary, size, 10);			 // �迭, �迭������, �迭 ��
	if (index == -1) {
		printf("�˻������ ã�� �� �����ϴ�.\n");
	}
	else {
		printf("�˻������ %d �Դϴ�\n", index);
	}
	return 0;
}