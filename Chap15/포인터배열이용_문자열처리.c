#include <stdio.h>

void main(void)
{
	int i;
	char* ptrArray[4] = { {"Korea"}, {"Seoul"}, {"Mapo"}, {"152���� 2 / 3"} };	// �� 4�� �� �Է�
	for ( i = 0; i < 4; i++)
	{
		printf("\n %s", ptrArray[i]);		// ���ڿ� ���·� ���
	}

	ptrArray[2] = "Jongno";					// 2������ ���� �ٲ� ������ �����̱� ������ ���ڿ���ü ���尡��
	printf("\n\n");
	for ( i = 0; i < 4; i++)
	{
		printf("\n %s", ptrArray[i]);		// �ٲ� ���ڿ� ���
	}

	getchar();

}