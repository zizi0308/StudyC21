#include <stdio.h>
#include <string.h>							// strlen �Լ� ����� ���� ������� ����

int main(void)
{
	char str1[80], str2[80];
	char* resp;								// ���ڿ��� �� �迭�� ������ ������

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))		// ���ڿ��� ���̸� ���Ͻ�Ű�� ������ �ٷ� ���Ŀ� ��밡��
		resp = str1;						// sizeof�ʹ� �ٸ� >> ���� ũ��(80)����
	else
		resp = str2;
	printf("�̸��� �� ������ : %s\n", resp);

	return 0;
}