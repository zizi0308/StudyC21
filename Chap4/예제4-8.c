/*#include <stdio.h>

int main()
{
	int a = 20, b = 3;							// 수를 사용할 때는 가급적 int만 double은 값이 필요할때만 형변환해서 사용
	double res;

	res = ((double)a) / ((double)b);			// ((double)a)만 해도 b는 자동 형변환 됨
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);		

	a = (int)res;								// 형변환은 우항에서만!! (좌항에서는 저장하는 곳)
	printf("(int) %1lf의 결과 : %d\n", res, a);

	return 0;
}*/