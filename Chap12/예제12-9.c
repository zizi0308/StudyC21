#include <stdio.h>
#include <string.h>					// strncpy �Լ� ����� ���� ������� ����

int main(void)
{
	char str[20] = "mango tree";	// �迭 �ʱ�ȭ
		
	strncpy(str, "apple-pie", 5);	// apple-pie���� �ټ����ڸ� ����(�տ������� 5�� apple)
	str[5] = '\0';					// apple tree���� tree�� ���ְ� �ʹٸ� �ڿ� �ι��ڸ� �ٿ��ش�
	printf("%s\n", str);			// ������� ���ڿ� ���

	return 0;
}