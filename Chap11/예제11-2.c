#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);
	// 2���� ���ڸ� �����Է� scanf�� �����̳� ���͵� �ν��ϹǷ� �� �� �����ϱ�
	// *����* scanf("�� ���� �Է��ϼ���, %d%d", &a, &b); 
	// �̰� ���ȵ� �� ���� �Է��ϼ���� printf�� ����!!
	printf("[%c%c]", ch1, ch2);
	// �Էµ� �������

	return 0;
}