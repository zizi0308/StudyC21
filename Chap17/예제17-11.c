#include <stdio.h>

enum season
{
	SPRING, SUMMER, FALL = 100, WINTER
};	// ������ �� �ٸ� ���·� ǥ���� ��(4����Ʈ�� ����)

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
	printf("���� ����Ȱ�� => %s\n", pc);

	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER);

	return 0;
}