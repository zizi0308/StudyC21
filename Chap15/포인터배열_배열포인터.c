#include <stdio.h>

void main(void)
{
	char* ptrArray[2];	//������ �迭
	char** ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;
	printf("\n ptrArray[0]�� �ּ� (&ptrArray[0]) = %u", &ptrArray[0]);
	printf("\n ptrArray[0]�� �� (ptrArray[0]) = %u", ptrArray[0]);
	printf("\n ptrArray[0]�� ������ (*ptrArray[0]) = %c", *ptrArray[0]);
	printf("\n ptrArray[0]�� ���� ���ڿ� (*ptrArray[0]) = %s", *ptrArray);

	printf("\n ptrArray[1]�� �ּ� (&ptrArray[0]) = %u", &ptrArray[1]);
	printf("\n ptrArray[1]�� �� (ptrArray[0]) = %u", ptrArray[1]);
	printf("\n ptrArray[1]�� ������ (*ptrArray[0]) = %c", *ptrArray[1]);
	printf("\n ptrArray[1]�� ���� ���ڿ� (*ptrArray[0]) = %s", *(ptrArray + 1));

	printf("\n ptrptr�� �ּ� (&ptrptr) = %u", &ptrptr);
	printf("\n ptrptr�� �� (ptrptr) = %u", ptrptr);
	printf("\n ptrptr�� 1�� ������ (*ptrptr) = %u", *ptrptr);
	printf("\n ptrptr�� 2�� ������ (**ptrptr) = %c", **ptrptr);
	printf("\n ptrptr�� 2�� ���� ���ڿ� (**ptrptr) = %s", *ptrptr);

	printf("\n\n *ptrArray[0] : ");
	for ( i = 0; i < 5; i++)
	{
		printf("%c", *(ptrArray[0] + i));
	}
	printf("\n **ptrptr : ");
	for ( i = 0; i < 5; i++)
	{
		printf("%c", *(*ptrptr + i));
	}

	printf("\n\n *ptrArray[1] : ");
	for (i = 0; i < 5; i++)
	{
		printf("%c", *(ptrArray[1] + i));
	}
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++)
	{
		printf("%c", *(*(ptrptr + 1) + i));
	}

	getchar();
}