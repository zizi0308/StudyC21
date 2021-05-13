#include <stdio.h>
#define MAX(a, b) ((a>b)?a:b)
#define MAX_DEGREE 50

typedef struct
{
	int degree;
	float coef[MAX_DEGREE];
} polynomial;

polynomial addPoly(polynomial, polynomial);
void printPoly(polynomial);

void main()
{
	polynomial A = { 3, {4, 3, 5, 0} };			// 3 = 다항식의 최고 높은 차수 (3, 2, 1, 0차에 대한 지수값 초기화)
	polynomial B = { 4, {3, 1, 0, 2, 1} };

	polynomial C;								// 함수를 실행시킨 결과를 리턴받아 polynomial C에 저장
	C = addPoly(A, B);							

	printf("\n A(x) = "); printPoly(A);			// 다항식의 출력(A)
	printf("\n B(x) = "); printPoly(B);
	printf("\n C(x) = "); printPoly(C);

	getchar();
}

polynomial addPoly(polynomial A, polynomial B) {
	polynomial C;
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree;		// 각각의 멤버변수를 저장(구조체의 가장 높은 차수가 저장)
	C.degree = MAX(A.degree, B.degree);					// 4가 저장(3과 4중 큰 것)

	while (A_index <= A.degree && B_index <= B.degree)	// 이 조건을 만족 (둘 다 참이되야 함)
	{
		if (A_degree > B_degree)						// while조건을 만족하므로 if로 이동, 조건만족안함
		{
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}
		else if (A_degree == B_degree)
		{
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
			A_degree--;
			B_degree--;
		}
		else
		{	// 다항식 A에서 현재 처리 중인 항의 지수가 다항식 B에서 현재처리중인 지수보다 작을 때,
			C.coef[C_index++] = B.coef[B_index++];		// 이 조건 만족 (B_index의 0번째 함수를 저장)
			B.degree--;				 // 다항식 B의 현재 항의 계수를 다항식 C의 현재 항의 계수로 저장
		}
	}
	return C;		// 다항식의 덧셈 결과를 다항식 C에 반환
}
void printPoly(polynomial P) {		// 다항식을 출력하기 위한 함수선언
	int i, degree;
	degree = P.degree;

	for ( i = 0; i <= P.degree ; i++)
	{
		printf("%3.0fx^%d", P.coef[i], degree--);
		if (i < P.degree) printf(" +");
	}
	printf("\n");
}