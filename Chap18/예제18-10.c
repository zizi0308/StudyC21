#include <stdio.h>

int main(void)
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	while (fgetc(fp) != '\n');		// ���ڿ��� �ִ� ������ ������(������ ������ ������)
	fgets(name, sizeof(name), fp);	// �ι��ڰ� ������ �������� ���� ��
	printf("���� : %d, �̸� : %s", age, name);
	fclose(fp);

	return 0;
}