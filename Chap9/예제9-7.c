#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a%d, b:%d\n", a, b);

	return 0;
}
void swap(int* pa, int* pb)			// �Է°��� ���� ���� �����ͷ� ������(�ּҸ� �����Ŵ)
{
	int temp;

	temp = *pa;						// ���޹��� �ּҰ��� �����͸� �ǵ帲 ������ ���̹Ƿ� �Ϲݺ����� ����
	*pa = *pb;
	*pb = temp;
}