#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;							// �ڱ�Ұ��� ���� ������
};

int main(void)
{
	struct profile zizi;

	strcpy(zizi.name, "������");
	zizi.age = 26;
	zizi.height = 168.4;

	zizi.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(zizi.intro);

	printf("�̸� : %s\n", zizi.name);
	printf("���� : %d\n", zizi.age);
	printf("Ű : %.1lf\n", zizi.height);
	printf("�ڱ�Ұ� : %s\n", zizi.intro);
	free(zizi.intro);						// �޸� �����Ҵ��� �޾ұ� ������ �Ҵ��� �� ���������ش�

	return 0;
}