#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary�� �� : %u\t", ary);		// �迭 ù��° �� �����ּ�
	printf("ary�� �ּ� : %u\n", &ary);		// �迭 !��ü!�� �����ּ� 
	printf("   ary + 1 : %u\t", ary + 1);	// �迭 �ι�° �� �����ּ� 
	printf("  &ary + 1 : %u\n", &ary + 1);	// �迭��ü ũ�� + 1, ���������� �̷����´� �� �Ⱦ� + 1 �迭�� �Ҵ�Ǿ��ִ� �� ���� �޸𸮸� �𸣱⶧����

	return 0;
}