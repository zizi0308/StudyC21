#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;					// struct profile�� ����Ϸ��� �꺸�� �տ� ����Ǿ��־�� ��
	int id;
	double grade;
};

int main(void)
{
	struct student zizi;

	zizi.pf.age = 26;
	zizi.pf.height = 168.4;
	zizi.id = 135;
	zizi.grade = 4.0;

	printf("���� : %d\n", zizi.pf.age);
	printf("Ű : %.1lf\n", zizi.pf.height);
	printf("�й� : %d\n", zizi.id);
	printf("���� : %.1lf\n", zizi.grade);

	return 0;
}