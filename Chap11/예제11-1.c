#include <stdio.h>

int main(void)
{
	char small, cap = 'G';					// char�� �������� �ʱ�ȭ

	if ((cap >= 65) && (cap <= 'Z'))		// �빮�� �������
	{
		small = cap + ('a' - 65);			// ��/�ҹ����� ���̸� ���� �ҹ��ڷ� ��ȯ 
	}										// �빮��'A' + 32(�ƽ�Ű�ڵ� ����) = �ҹ���'a'

	printf("�빮�� : %c %c", cap, '\n');	// '\n' %c�� ����ϸ� ���� �ٲ��.
	printf("�ҹ��� : %c", small);

	return 0;
}