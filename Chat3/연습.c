#include <stdio.h>

int main()
{
	char name[20];
	int age;
	char addr[50], addr2[50];

	printf("�̸��Է� : ");
	scanf("%s", &name);
	printf("�����Է� : ");
	scanf("%d", &age);
	printf("�ּ��Է� : ");
	scanf("%s %s", &addr, &addr2);
	printf("%s�� ���̴� %d�̰�, �ּҴ� %s %s�Դϴ�.\n", name, age, addr, addr2);

	//int a;
	//char b;
	//printf("�����ϳ��� �Է��ϼ��� : $ ");
	//scanf("%d", &a);
	//getchar(); // ���ۿ� �ִ� ���ڸ� �ϳ� ������ ��
	//printf("�����ϳ��� �Է��ϼ��� : $ ");
	//scanf("%c", &b); // �Ǵ� scanf(" %c", &b);
	//printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);

	return 0;
}