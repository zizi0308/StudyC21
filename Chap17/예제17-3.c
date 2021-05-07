#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;					// struct profile을 사용하려면 얘보다 앞에 선언되어있어야 함
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

	printf("나이 : %d\n", zizi.pf.age);
	printf("키 : %.1lf\n", zizi.pf.height);
	printf("학번 : %d\n", zizi.id);
	printf("학점 : %.1lf\n", zizi.grade);

	return 0;
}