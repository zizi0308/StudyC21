#include <stdio.h>

/* Ű����� �Է��� �ܾ� �� ���̰� ���� �� �ܾ ����ϼ���. ���ٿ� �ϳ��� �ܾ �Է��ϸ�,
   ctrl + z�� ���� ������ �Է��� �ܾ� �߿��� ���̰� ���� �� �ܾ��� ���̸� ����մϴ�. �迭���X */

int main(void)
{
	int ch;
	int len = 0;				// �ܾ������ ������ ������ ����
	int max = 0;				// ���� �� �ܾ���̸� ������ ����
	ch = getchar();

	//while (1)
	//{
		if (ch != -1 && len != '\n')
		{
			ch = getchar();
			len++;
		}
		if (ch == -1) //break;
	//}
	if (len < max) len = max;
	printf("���� �� �ܾ��� ���� : %d", max);

	return 0;
}