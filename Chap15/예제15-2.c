#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);			// �����Լ��� ������ ������ ����Ǿ��ֱ� ������ (�Ϲ��Լ����� �׳� �����͸� ��)
												// ������ ��ȣ�� �ϳ� �� �Ἥ ���������͸� ����
int main(void)
{
	char* pa = "success";						// ������ ������ �����
	char* pb = "failure";					

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);							// �Լ��� �����Ű�� ���� �ּҰ����� ����
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;									// ������ ������ ����
	pt = *ppa;									// ppa�� ���������� �� (�ᱹ ��� pa�� �����Ͱ� "success")
	*ppa = *ppb;									
	*ppb = pt;
}