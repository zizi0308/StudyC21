#include <stdio.h>
int a = 10, b = 20;		// �������� >> ������ ���X
void swap();

int main()				// ��������
{
	//int temp;
	printf("�ٲٱ��� a, b : %d, %d\n", a, b);
	/*temp = a;
	a = b;
	b = temp;*/
	swap();
	printf("�ٲ� �� : a, b : %d, %d\n", a, b);

	return 0;
}
void swap()			// main�� ���� �����ؼ� �� main�� ���� ������ �ƴ�
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}