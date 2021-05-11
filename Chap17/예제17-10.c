#include <stdio.h>

union student						// 공용체를 선언(공용체를 설계)
{
	int num;
	double grade;
};

struct student1
{
	int num;						// 공용체 멤버의 초기화는 첫번째 멤버만 초기화 됨
	double grade;
};

int main(void)
{
	union student s1 = { 4.4 };		// 공용체 변수 s1을 선언
	struct student1 s2;
	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	s1.num = 315;
	printf("학번 : %d\n", s1.num);  // 멤버들 중 가장 큰 사이즈의 자료형 크기만 메모리에 할당을 시켜줌
	printf("%d\n", sizeof(s1));		// 나머지는 그 메모리를 공유 여기서 가장 큰 메모리 double : 8
	printf("%d", sizeof(s2));		// 패딩바이트 적용 16

	return 0;
}