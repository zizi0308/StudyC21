#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "straw";			// ���� �˳��ϰ� ��Ƴ���(���ڿ��� ���ϱ� ������ �޸� ħ�����ɼ�)

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}