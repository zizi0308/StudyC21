#include <stdio.h>

union student						// ����ü�� ����(����ü�� ����)
{
	int num;
	double grade;
};

struct student1
{
	int num;						// ����ü ����� �ʱ�ȭ�� ù��° ����� �ʱ�ȭ ��
	double grade;
};

int main(void)
{
	union student s1 = { 4.4 };		// ����ü ���� s1�� ����
	struct student1 s2;
	printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;
	printf("���� : %.1lf\n", s1.grade);
	s1.num = 315;
	printf("�й� : %d\n", s1.num);  // ����� �� ���� ū �������� �ڷ��� ũ�⸸ �޸𸮿� �Ҵ��� ������
	printf("%d\n", sizeof(s1));		// �������� �� �޸𸮸� ���� ���⼭ ���� ū �޸� double : 8
	printf("%d", sizeof(s2));		// �е�����Ʈ ���� 16

	return 0;
}