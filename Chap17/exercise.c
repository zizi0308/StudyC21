#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	5명의 사원아이디, 사원이름, 한달급여를 입력받아 출력한 뒤
	5명 사원 급여 총액과 평균급여액을 구하시오
	이름은 동적할당
*/

typedef struct employee {
	int id;
	char* name;
	int salary;
}Employee;  // struct employee로 재정의

int main(void)
{
	Employee member[5];
	int i;
	int sum;
	double avg;
	char temp[20];
	 
	for ( i = 0; i < 5; i++)
	{
		printf("사원아이디, 사원이름, 한달 급여를 입력하시오. : \n");
		scanf("%d %s %d", &member[i].id, temp, &member[i].salary);
		member[i].name = (char*)malloc(5 * strlen(temp) + 1);
		strcpy(member[i].name, temp);

	}
	
	for ( i = 0; i < 5; i++)
	{
		printf("사원아이디 : %d\t, 사원이름 : %s\t, 한달급여 : %d\t",
			member[i].id, member[i].name, member[i].salary);
	}
	
	sum = 0;
	for ( i = 0; i < 5; i++)
	{
		sum += member[i].salary;
	}
	avg = sum / 5.0;
	printf("총급여 : %d , 급여평균 : %.1lf", sum, avg);
	
	for ( i = 0; i < 5; i++)
	{
		free(member[i].name);
	}
	
	return 0;
}