#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	int i;
	int str_len;
	
	
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	str_len = strlen(str);
	for ( i = 0; i < str_len / 2; i++)
	{
		if (str[i] != str[str_len - i - 1])
		{
			//printf("%c%c", str[0], str[str_len - i -1]);
			printf("%s(��)�� ȸ���� �ƴմϴ�.", str);
			break;
		}
		printf("ȸ���Դϴ�.");
	}
	return 0;
}