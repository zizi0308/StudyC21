#include <stdio.h>
#include <stdbool.h>
// 스택구조를 순차자료 구조를 이용해 생성
#define STACK_SZ	3
//#define TRUE		1	// #include <stdbool.h>로 대체가능
//#define FALSE		2

/* 스택을 만들 때 필요한 함수 */
int isEmpty();			// 스택 공백체크 (상태확인)
int isFull();			// 스택 포화체크 (상태확인)
void push(int);			// 스택 입력
int pop();				// 스택 삭제
int peek();				// 스택 맨위값을 확인 후 리턴
void printStack();		// 스택 출력

int stack[STACK_SZ];
int top = -1;			// 스택을 입력할 때마다 입력한 데이터 수를 확인, 항상 스택의 맨 위를 가리킨다.

int main()
{
	push(10);
	push(11);
	push(12);
	pop();
	push(13);

	printStack();

	return 0;
}

int isEmpty()
{
	if (top <= -1) return true;		// 스택안에 들어가있는게 없다면 true 반환
	else return false;
}
int isFull()
{
	if (top >= STACK_SZ - 1) return true;		// 값이 가득찼으면 true 반환
	else return false;
}
void push(int data)
{
	if (isFull()) {
		printf("STACK overflow!!\n"); 
		return;						// else문(그 다음 명령문)을 실행시키지 않기위해 값을 리턴해줌
	}
	else {
		stack[++top] = data;		// top이 -1부터이니까 인덱스를 0부터 만들려면 먼저 증가시켜야함
	}
}
int pop()
{
	if (isEmpty()) {
		printf("STACK underflow!!\n");
		return;
	}
	else {
		return stack[top--];		// 맨 마지막으로 들어간 것부터 삭제 (초기값을 -1로 맞춰주기 위해서)
	}
}
int peek()
{
	if (isEmpty()) {
		printf("STACK underflow!!\n");
		exit(1);
	}
	else return stack[top];		// 단지 맨위의 있는 값을 확인함(top자체를 건드리지 않음)
}
void printStack()
{
	int i;
	if (!isEmpty()) {
		for ( i = 0; i <= top; i++)	{
			printf("%d   ", stack[i]);
		}
	}
}