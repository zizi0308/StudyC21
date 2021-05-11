#include <stdio.h>

enum season
{
	SPRING, SUMMER, FALL = 100, WINTER
};	// 정수를 또 다른 형태로 표현한 것(4바이트로 고정)

int main(void)
{
	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저활동 => %s\n", pc);

	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER);

	return 0;
}