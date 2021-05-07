#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_str(char** ps);							// �Է�(���� ������)�� �ְ� ����� ���� �Լ�

int main(void)
{
	char temp[80];									// �ӽ� �迭 ����
	char* str[21] = { 0 };							// ���� �������ͷ� �ʱ�ȭ�� ������ �迭, ������ �迭�� �Է����� ����Ϸ��� ���������ͷ�
	int i = 0;

	while (i < 20)									// while���� for��ó�� �ٲٷ��� ���ǽ��� ����, �� ������ �������� ��ġ�ϰ� �����ȴ�.
	{
		printf("������ �Է��ϼ��� : ");
		gets(temp);									// ���ڿ����� �Լ��� gets�� ���Ⱑ �ȴ�.
		if (strcmp(temp, "end") == 0) break;		// ���ڿ� 2���� ���ϴ� �Լ��� strcmp, temp�� "end"�� ���ڿ��� ���ٸ� ���� ����� �ݺ��� 1���� ��������
		str[i] = (char*)malloc(strlen(temp) + 1);	// malloc�� ���� �����Ҵ��� �ް� ����, ���ڿ��� ���̸� ���ϴ� strlen�Լ� ���ڿ����� + 1�� + 1�� Null������
		strcpy(str[i], temp);						// temp�� �ִ� ���ڿ��� �����ؼ� �����Ŵ
		i++;										// i���� i = 1�� �ǹǷ� �ٽ� 13������ ���ư�
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}
	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL)								// ps�� �ִ� �����Ͱ��� ��� (ps�� �������� ���� �ּҰ��̴�(NULL�� �ֱ⶧����))
	{
		printf("%s\n", *ps);
		ps++;
	}
}