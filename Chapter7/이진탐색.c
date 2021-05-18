#include <stdio.h>

int BSearch(int* pary, int sz, int tg)
{
	int first = 0;
	int last = sz - 1;
	int mid;

	while (first <= last) {	// first�� �׻� last���� �۾ƾ� �ϹǷ�
		mid = (first + last) / 2;
		if (tg == pary[mid]) return mid;			// mid���� ã�� ���̶�� �ٷ� mid����
		else {
			if (tg > pary[mid]) first = mid + 1;	// ã���� �ϴ� Ÿ���� mid���� ũ�ٸ� mid+1 ���� last���� �˻�
			else last = mid - 1;					// ã���� �ϴ� Ÿ���� mid���� �۴ٸ� first���� mid-1���� �˻�
		}
	}
	return -1;		// �˻����� ���ٸ� -1 ��ȯ
}
int main()
{
	int ary[] = { 1, 2, 3, 5, 6, 7, 8 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int index;

	index = BSearch(ary, size, 2);
	if (index == -1){
		printf("�˻������ ã�� �� �����ϴ�.\n");
	}
	else {
		printf("���ȣ�� %d �Դϴ�\n", index);
	}
	return 0;
}