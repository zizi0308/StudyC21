#include <stdio.h>

int main(void)
{
	printf("apple의 시작 주소값 : %p\n", "apple");			// 주소연산자가 없는데 주소가 return
	printf("두번째 문자의 주소값 : %p\n", "apple" + 1);		// !문자열도 주소이기 때문!
	printf("첫번째 문자 : %c\n", *"apple");					// 첫번째 방 문자출력(간접 참조 연산)
	printf("두번째 문자 : %c\n", *("apple" + 1));			// 두번째 방 문자출력
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);// 위와같음


	return 0;
}