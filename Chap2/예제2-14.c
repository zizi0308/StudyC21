#include <stdio.h>

long int fact(int);		// ��� long �Է� int

void main(void) {
	int n, result;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);											// ������ ������
	result = fact(n);											// ���� �������鼭 �Լ�ȣ��
	printf("\n\n %d�� ���丮�� ���� %ld�Դϴ�.\n", n, result);	// n�� ���� ������
	getchar(); getchar();	// n, result
}

long int fact(int n) {
	int value;
	if (n <= 1) { // �������� (����Լ��� ���ѹݺ��� �������� �������� �ʿ�)
		printf("\n fact(1) �Լ�ȣ��!");
		printf("\n fact(1) �� ��ȯ!!");
		return 1;
	}
	else {
		printf("\n fact(%d) �Լ�ȣ��!", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) �� %ld ��ȯ!!", n, value);
		return value;
	}
}