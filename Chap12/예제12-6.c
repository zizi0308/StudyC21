#include <stdio.h>

int main(void)
{	// �굵 �����Է¹ް� �����Է¹������� ���� ���� �ȵ�
	int age;
	char name[20];

	printf("�����Է� : ");
	scanf("%d", &age);
	//fgetc(stdin); ���๮�ڸ� �о���� �Լ� ȣ��
	printf("�̸��Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);
	return 0;
}