#include <stdio.h>

int main(void)
{	// 얘도 문자입력받고 정수입력받을때는 전혀 문제 안됨
	int age;
	char name[20];

	printf("나이입력 : ");
	scanf("%d", &age);
	//fgetc(stdin); 개행문자를 읽어오는 함수 호출
	printf("이름입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);
	return 0;
}