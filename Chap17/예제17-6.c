#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score zizi = { 90, 80, 70 };		// ����ü scoreŸ�Կ� zizi��� ���� ����
	struct score* ps = &zizi;				// ����ü scoreŸ�Կ� ������ ���� �� �տ� ������ zizi�� �ּҰ� ����

	printf("���� : %d\n", (*ps).kor);		// (*ps).kor ����ü �����ͷ� ��� ���� �� ���´� �� �Ⱦ� �ٷ� ������
	printf("���� : %d\n", ps-> eng);		// '->' ������ ��� (����ü �����ͷ� ����� �����ϴ� ���)
	printf("���� : %d\n", ps -> math);

	return 0;
}