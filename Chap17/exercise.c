#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	5���� ������̵�, ����̸�, �Ѵޱ޿��� �Է¹޾� ����� ��
	5�� ��� �޿� �Ѿװ� ��ձ޿����� ���Ͻÿ�
	�̸��� �����Ҵ�
*/

typedef struct employee {
	int id;
	char* name;
	int salary;
}Employee;  // struct employee�� ������

int main(void)
{
	Employee member[5];
	int i;
	int sum;
	double avg;
	char temp[20];
	 
	for ( i = 0; i < 5; i++)
	{
		printf("������̵�, ����̸�, �Ѵ� �޿��� �Է��Ͻÿ�. : \n");
		scanf("%d %s %d", &member[i].id, temp, &member[i].salary);
		member[i].name = (char*)malloc(5 * strlen(temp) + 1);
		strcpy(member[i].name, temp);

	}
	
	for ( i = 0; i < 5; i++)
	{
		printf("������̵� : %d\t, ����̸� : %s\t, �Ѵޱ޿� : %d\t",
			member[i].id, member[i].name, member[i].salary);
	}
	
	sum = 0;
	for ( i = 0; i < 5; i++)
	{
		sum += member[i].salary;
	}
	avg = sum / 5.0;
	printf("�ѱ޿� : %d , �޿���� : %.1lf", sum, avg);
	
	for ( i = 0; i < 5; i++)
	{
		free(member[i].name);
	}
	
	return 0;
}