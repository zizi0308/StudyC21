#include <stdio.h>

int main(void)
{
	char* dessert = "apple";		// char타입의 포인터 변수 apple의 시작주소를 dessert에 저장

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";				// 주소값을 바꿔서 저장 포인터는 변수이므로 바꿀 수 있음
	printf("내일 후식은 %s입니다.\n", dessert);

	return 0;
}