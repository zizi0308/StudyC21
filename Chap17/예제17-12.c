#include <stdio.h>

typedef struct
{
	int num;
	double grade;
}Student;			// 설계부분에 바로 재정의 하는 것이 좋음(예제와 다르니 참고)

void print_data(Student* ps);

int main(void)
{
	Student s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}

void print_data(Student* ps)
{
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}