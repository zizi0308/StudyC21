#include <stdio.h>
#include "user.h"


int main(void)
{
	int n1, n2;
	int res;
	input_data(&n1, &n2);
	res = sum(n1, n2);
	printf("гу : %d\n", res);

	return 0;
}