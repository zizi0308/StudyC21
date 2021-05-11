#include <stdio.h>

int main(void)
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	while (fgetc(fp) != '\n');		// 문자열에 있는 개행을 없애줌(개행을 제거할 때까지)
	fgets(name, sizeof(name), fp);	// 널문자가 들어오면 다음으로 실행 됨
	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);

	return 0;
}