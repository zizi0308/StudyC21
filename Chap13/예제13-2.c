#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{	// ���ο� �Ҵ���� ���ÿ����� �Ǵٸ� ����� �ִٰ� �����ؾ� �� 
		int temp;

		temp = a;
		a = b;
		b = temp;
	}
	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);

	return 0;
}