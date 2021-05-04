#include <stdio.h>

int main(void)
{
	char* pray[5];						// char타입 포인터를 연속적으로 5개 가지고 있는 배열
	int i;

	pray[0] = "dog";					
	pray[1] = "elephant";
	pray[2] = "horse";
	pray[3] = "tiger";
	pray[4] = "lion";

	for ( i = 0; i < 5; i++)
	{
		printf("%s\n", pray[i]);		// 각각 방이 가리키고 있는 주소값을 읽어옴
	}

	return 0;
}