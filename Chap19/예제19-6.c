#include <stdio.h>
#define VER 7
#define BIT16

int main(void)
{
	int max;

#if VER >= 6								// #ifdhk #endif
	printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16								// BIT16�� ���ǵǾ� ������ (#ifndef ���ǵǾ����� ������)
	max = 32767;							// �̰� �����ϰ�
#else										// �ƴϸ�
	max = 2147483647;						// �̰� �����ض�
#endif

	printf("int �������� �ִ� : %d\n", max);

	return 0;
}