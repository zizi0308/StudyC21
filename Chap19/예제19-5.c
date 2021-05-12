#include <stdio.h>
#define		PRINT_EXPR(x)	printf(#x " = %d\n", x) // # << 문자로 취급해라
#define		NAME_CAT(x, y)	(x ## y)				// ## << 2두개의 문자를 붙인다

int main(void)
{
	int a1, a2;

	NAME_CAT(a, 1) = 10;		// (a1) = 10;
	NAME_CAT(a, 2) = 20;		// (a2) = 20;
	PRINT_EXPR(a1 + a2);		// printf ("a1 + a2"" = %d\n",a1 + a2 )
	PRINT_EXPR(a2 - a1);		// printf ("a2 - a1"" = %d\n",a2 - a1 )

	return 0;
}