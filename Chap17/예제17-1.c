#include <stdio.h>

struct student								// ����ü ����(����ü�� ����μ� �������� ���� �� �ִ�)
{
	int num;								// int�� ��� (����ü ����� �Լ����� �� ���� �� ����)
	double grade;							// double�� ���
};											// �� �κ��� �޸� �Ҵ�κ��� �ƴ�

int main(void)
{
	struct student s1;						// struct student���� ��������, main�ȿ� ������ ����Ǿ�� �޸𸮰� �Ҵ� ��

	s1.num = 2;								// s1.num�� .�� ������� �������̴� s1(����ü ������), num(�����)
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);

	return 0;
}