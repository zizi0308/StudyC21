#include <stdio.h>
#include <string.h>

int main(void)
{
	char str;

	printf("���ĺ��� �Է��ϼ��� : ");
	scanf("%c", &str);
	
	
	if ((str >= 65) && (str <= 90))
	{
		char p;
		p = str + ('a' - 'A');
		printf("�ٲ� ���� : %c\n", p);
	}
	else
	{
		char p;
		p = str - ('a' - 'A');
		printf("�ٲ� ���� : %c\n", p);
	}
	

	return 0;
}