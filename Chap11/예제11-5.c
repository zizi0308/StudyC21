#include <stdio.h>

int main(void)
{
	int res;						// scanf �Լ��� ��ȯ���� ������ ����
	char ch;

	while (1)						// ���ѹݺ�
	{
		res = scanf("%c", &ch);		// ���� �Է�, <Ctrl> + <Z> ����, <Ctrl> + <Z> ������ -1 ��ȯ
		if (res == EOF) break;		// ��ȯ���� -1�̸� �ݺ� ���� (EOF = -1)
		printf("%d ", ch);
	}

	return 0;
}