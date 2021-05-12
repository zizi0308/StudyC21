#include <stdio.h>
#include <string.h>

struct employee
{
	char name[10];
	int year;
	int pay;
};

void main(void)
{
	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy(Sptr->name, "이순신");
	Sptr->year = 2015;
	Sptr->pay = 5900;

	printf("\n 이름 : %s", Sptr->name);
	printf("\n 입사 : %d", Sptr->year);
	printf("\n 연봉 : %d", Sptr->pay);

	getchar();		// 문자를 입력받는 문자함수, 바로 종료되지 않고 입력을 받고 종료됨
}