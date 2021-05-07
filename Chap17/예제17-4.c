#include <stdio.h>

struct student					// 구조체 선언
{
	int id;						// int id = 0 할 수 없음 >> 메모리에 할당되는 영역이 아니기 때문에 
	char name[20];
	double grade;
};

int main(void)
{
	struct student s1 = { 315, "홍길동", 2.4 },
				   s2 = { 316, "이순신", 3.7 },
				   s3 = { 317, "세종대왕", 4.4 };
	struct student max;

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);
	return 0;
}