#include <stdio.h>

int main(void)
{
	char str[20] = "Data Structure!";
	int cnt = 0;
	int i;
	printf("\n���ڹ迭 str[] : ");
	
	for ( i = 0; str[i]; i++)		// ���ǽĿ� �迭�� ������
	{
		printf("%c", str[i]);
		cnt++;
	}
	printf("%d\n", cnt);			// ���ڿ��� ���̸� ��Ÿ��
	getchar();
	
	

	return 0;
}