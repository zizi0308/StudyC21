#include <stdio.h>

void main(void) {
	int i, n = 0, * ptr;
	int(*pptr)[4];					// 배열 포인터가 있어야 주소값 받아서 이차원배열형태로 출력가능 >> 이게 있어야 이중포문이 가능함
	int *(sale[2][4]) = { {63, 84, 140, 130},// 포인터 배열
					    {157, 209, 251, 312} };
	pptr = sale;
	printf("%d", pptr[1][1]);
	ptr = &sale[0][0];
	for ( i = 0; i < 8; i++) {		// 단순한 데이터값은 뿌릴 수 있음(메모리에 저장되있는 물리적인 순서를 보여줌) 실질적인 제어는 할 수 없다.
		printf("\n adderss : %u sale %d = %d , %u", ptr, i, *ptr, pptr + 1); // pptr + 1 = 16(4*4)이 증가됨(행의 값 * 주소 값)
		ptr++;
	}
	//printf("%d", ptr[1][1]);		// 실질적으로 이차원 배열을 가리키는 포인터가 아니기 때문(단순히 int형 자료만 취급함)
	getchar();
}