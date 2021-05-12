#include <stdio.h>

int main(void)
{
	int i;
	char string1[20] = "Dreams come ture!", string2[20], *ptr1, *ptr2;

	ptr1 = string1;
	printf("\n string1의 주소 = %u \t ptr1 = %u", string1, ptr1);
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
	printf("\n\n %s", ptr1 + 7);				// 배열의 7번째 방부터
	ptr2 = &string1[7];							
	printf("\n %s \n\n", ptr2);					// ptr2에 7번방부터 문자열로 출력

	for ( i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i));					// 배열을 간접참조 함(주소값이 증가되는 형태로 데이터를 읽어서 출력)
	}
	for ( i = 0; i < 20; i++)
	{
		string2[i] = *(ptr1 + i);
	}

	printf("\n\n string1 = %s", string1);
	printf("\n string2 = %s", string2);

	*ptr1 = 'P';
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("\n\n string1 = %s\n", string1);

	getchar();


	return 0;
}