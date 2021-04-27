#include <stdio.h>

int main()
{
	char name[20];
	int age;
	char addr[50], addr2[50];

	printf("이름입력 : ");
	scanf("%s", &name);
	printf("나이입력 : ");
	scanf("%d", &age);
	printf("주소입력 : ");
	scanf("%s %s", &addr, &addr2);
	printf("%s의 나이는 %d이고, 주소는 %s %s입니다.\n", name, age, addr, addr2);

	//int a;
	//char b;
	//printf("정수하나를 입력하세요 : $ ");
	//scanf("%d", &a);
	//getchar(); // 버퍼에 있는 문자를 하나 가지고 옴
	//printf("문자하나를 입력하세요 : $ ");
	//scanf("%c", &b); // 또는 scanf(" %c", &b);
	//printf("입력된 값은 %d, %c 입니다.\n", a, b);

	return 0;
}