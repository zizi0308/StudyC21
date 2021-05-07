#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);		// 함수의 선언 vision형 구조체 타입, 괄호가 있으면 함수! 괄호앞에 있는것은 함수이름

int main(void)
{
	struct vision robot;
	
	printf("시력입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;						// 출력이 있으면(struct) return이 있음 원래 return은 한 번만 할 수있지만(이것 때문에 포인터를 씀),
}										// 구조체를 리턴하면 구조체가 가지고 있는 멤버들 모두 리턴시키는 형태(구조체 안의 멤버들을 복사해서 쓸 수 있음)가 됨
