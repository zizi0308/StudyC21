#include <stdio.h>

struct student								// 구조체 선언(구조체는 멤버로서 변수만을 가질 수 있다)
{
	int num;								// int형 멤버 (구조체 멤버는 함수말고 다 들어올 수 있음)
	double grade;							// double형 멤버
};											// 이 부분은 메모리 할당부분이 아님

int main(void)
{
	struct student s1;						// struct student형의 변수선언, main안에 변수가 선언되어야 메모리가 할당 됨

	s1.num = 2;								// s1.num의 .은 멤버접근 연산자이다 s1(구조체 변수명), num(멤버명)
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}