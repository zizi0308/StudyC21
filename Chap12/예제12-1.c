#include <stdio.h>

int main(void)
{
	printf("apple�� ���� �ּҰ� : %p\n", "apple");			// �ּҿ����ڰ� ���µ� �ּҰ� return
	printf("�ι�° ������ �ּҰ� : %p\n", "apple" + 1);		// !���ڿ��� �ּ��̱� ����!
	printf("ù��° ���� : %c\n", *"apple");					// ù��° �� �������(���� ���� ����)
	printf("�ι�° ���� : %c\n", *("apple" + 1));			// �ι�° �� �������
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);// ���Ͱ���


	return 0;
}