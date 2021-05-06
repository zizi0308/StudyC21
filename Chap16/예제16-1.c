#include <stdio.h>
#include <stdlib.h>								// malloc, free �Լ� ����� ���� �������
												// malloc�� ����ϸ� Heap������ ����Ͽ� �����Ҵ��� �� �� �ִ�.
int main(void)
{
	int* pi;									// ���� �Ҵ� ������ ������ ������ ����(9�࿡�� �̹� �ּҰ��� return �ؾߵȴٴ� ���� �� �� ����)
	double* pd;

	pi = (int*)malloc(sizeof(int));				// int�� ũ��� �����Ҵ� int���� �Ҵ� �޾Ҵٰ� ��������� ���� >> (int*)malloc >> voidŸ���̶� ���� ����ȯ, malloc(�Ҵ���� �ּҸ� return������), ����Ʈ�� �� Ȱ���
	if (pi == NULL)								// NULL�� �ƹ��͵� ������Ű�� ������(return�� ����) >> �ּҰ��� return �ȵ�
	{
		printf("# �޸𸮰� �����մϴ�.\n");
		exit(1);								// 1 : ��������
	}	// NULL���� �ƴ��� �Ǻ��ϴ� ������ ��� ������ ��� ��

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);		// ���� �Ҵ� ������ ���� �� �� ���
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi);									// ���� �Ҵ� ������ ��ȯ, ���� free�� ���� ������ ���������� ������ ��� ��������
	free(pd);

	return 0;
}