#include <stdio.h>

/*Ű����� �Է��� ���忡�� �ҹ��� �������� ����ϱ�*/

int main(void)
{
	int ch;				// ���ڸ� �Է� �� ����
	int cnt = 0;		// �ҹ����� ������ �� ����
	ch = getchar();

	while (ch != '\n')
	{
		if ( (ch >= 'a') && (ch <= 'z')) cnt++;
		ch = getchar();
	}

	printf("�ҹ����� ���� : %d", cnt);

	return 0;
}