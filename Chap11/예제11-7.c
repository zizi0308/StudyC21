#include <stdio.h>
#include <string.h>

int main(void)
{
	int num, grade;
	// 페이지 311 참고
	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}

/*int main(void)
{
	int num, grade;
	// 페이지 311 참고
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 입력 : ");
	scanf("%d", &num);
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;

	학점먼저 입력한 경우 (문자 - 정수)
	A (enter) 10 (enter) >> 문자 'A'출력 후 바로 엔터 안보고 정수 10을 출력함
	개행문자 자체가 정수를 입력하기 때문

	학번먼저 입력한 경우 (정수 - 문자)
	10 (enter) A (enter) >> 정수 10 이후 누르는 엔터를 scanf가 문자취급 해버림(뒤에 문자가 있으므로)
	이 경우 getchar()를 넣어 새로운 문자를 넣게 해야 'A'를 입력 할 수 있음(버퍼에 남아있는 개행문자 제거) 
}*/