#include <stdio.h>
#include <string.h>

int main(void)
{
	int num, grade;
	// ������ 311 ����
	printf("�й� �Է� : ");
	scanf("%d", &num);
	getchar();
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}

/*int main(void)
{
	int num, grade;
	// ������ 311 ����
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� �Է� : ");
	scanf("%d", &num);
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;

	�������� �Է��� ��� (���� - ����)
	A (enter) 10 (enter) >> ���� 'A'��� �� �ٷ� ���� �Ⱥ��� ���� 10�� �����
	���๮�� ��ü�� ������ �Է��ϱ� ����

	�й����� �Է��� ��� (���� - ����)
	10 (enter) A (enter) >> ���� 10 ���� ������ ���͸� scanf�� ������� �ع���(�ڿ� ���ڰ� �����Ƿ�)
	�� ��� getchar()�� �־� ���ο� ���ڸ� �ְ� �ؾ� 'A'�� �Է� �� �� ����(���ۿ� �����ִ� ���๮�� ����) 
}*/