#include <stdio.h>

int main(void)
{
	int i = 0;				// �迭��� ÷�ں���(2�� �̻��� �����͸� ����ϴ� ����)
	char str[20];			// ���ڿ��� ������ �迭
	char ch;				// �Է��� ���ڸ� �޾Ƶ� �ӽú���

	do
	{
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[i] = '\0';
	printf("%s", str);
	return 0;
}

void my_gets(char* ps)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}