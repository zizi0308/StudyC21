#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score zizi = { 90, 80, 70 };		// 구조체 score타입에 zizi라는 변수 선언
	struct score* ps = &zizi;				// 구조체 score타입에 포인터 선언 후 앞에 생성한 zizi의 주소값 저장

	printf("국어 : %d\n", (*ps).kor);		// (*ps).kor 구조체 포인터로 멤버 접근 이 형태는 잘 안씀 바로 밑줄의
	printf("영어 : %d\n", ps-> eng);		// '->' 연산자 사용 (구조체 포인터로 멤버에 접근하는 방법)
	printf("수학 : %d\n", ps -> math);

	return 0;
}