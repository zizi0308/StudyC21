#include <stdio.h>
void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));				// �� ���� ���ڿ��� �Է��ϴ� �Լ� 
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}

void my_gets(char* str, int size)
{
	int ch;									// getchar �Լ��� ��ȯ���� ���� �� ����
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size -1))   // ch�� ������ �ƴϰ� ��ȯ���� ������ -1�� ��(�迭�� ũ�⸸ŭ �Է�) 
	{
		str[i] = ch;						// �Է��� ���ڸ� �迭�� ����
		i++;								// ÷������	
		ch = getchar();						// ���ο� �����Է�
	}
	str[i] = '\0';							// ���ڿ��� �������� �˸��� ��ħǥ ����(Null ����)

}
