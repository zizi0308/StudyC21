#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";	// �迭�� ���ڿ� �ʱ�ȭ
	char* ps = "banana";			

	puts(str);						// ���ڿ��� ����ϰ� �ڵ����� �����
	fputs(ps, stdout);				// banana�� ���(������ ����) �ڿ� ��Ʈ���� ���������
	puts("milk");					// ���ڿ��� ����Ǿ��ִ� ��ġ�� �ٷ����

	return 0;
}