#include <stdio.h>

int main(void)
{
	char* dessert = "apple";		// charŸ���� ������ ���� apple�� �����ּҸ� dessert�� ����

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	dessert = "banana";				// �ּҰ��� �ٲ㼭 ���� �����ʹ� �����̹Ƿ� �ٲ� �� ����
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

	return 0;
}