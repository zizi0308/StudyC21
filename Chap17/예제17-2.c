#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;							// 자기소개를 위한 포인터
};

int main(void)
{
	struct profile zizi;

	strcpy(zizi.name, "조희지");
	zizi.age = 26;
	zizi.height = 168.4;

	zizi.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(zizi.intro);

	printf("이름 : %s\n", zizi.name);
	printf("나이 : %d\n", zizi.age);
	printf("키 : %.1lf\n", zizi.height);
	printf("자기소개 : %s\n", zizi.intro);
	free(zizi.intro);						// 메모리 동적할당을 받았기 때문에 할당을 꼭 해제시켜준다

	return 0;
}