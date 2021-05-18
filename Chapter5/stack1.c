#include <stdio.h>
#include <stdbool.h>
// ���ñ����� �����ڷ� ������ �̿��� ����
#define STACK_SZ	3
//#define TRUE		1	// #include <stdbool.h>�� ��ü����
//#define FALSE		2

/* ������ ���� �� �ʿ��� �Լ� */
int isEmpty();			// ���� ����üũ (����Ȯ��)
int isFull();			// ���� ��ȭüũ (����Ȯ��)
void push(int);			// ���� �Է�
int pop();				// ���� ����
int peek();				// ���� �������� Ȯ�� �� ����
void printStack();		// ���� ���

int stack[STACK_SZ];
int top = -1;			// ������ �Է��� ������ �Է��� ������ ���� Ȯ��, �׻� ������ �� ���� ����Ų��.

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
	if (top <= -1) return true;		// ���þȿ� ���ִ°� ���ٸ� true ��ȯ
	else return false;
}
int isFull()
{
	if (top >= STACK_SZ - 1) return true;		// ���� ����á���� true ��ȯ
	else return false;
}
void push(int data)
{
	if (isFull()) {
		printf("STACK overflow!!\n"); 
		return;						// else��(�� ���� ��ɹ�)�� �����Ű�� �ʱ����� ���� ��������
	}
	else {
		stack[++top] = data;		// top�� -1�����̴ϱ� �ε����� 0���� ������� ���� �������Ѿ���
	}
}
int pop()
{
	if (isEmpty()) {
		printf("STACK underflow!!\n");
		return;
	}
	else {
		return stack[top--];		// �� ���������� �� �ͺ��� ���� (�ʱⰪ�� -1�� �����ֱ� ���ؼ�)
	}
}
int peek()
{
	if (isEmpty()) {
		printf("STACK underflow!!\n");
		exit(1);
	}
	else return stack[top];		// ���� ������ �ִ� ���� Ȯ����(top��ü�� �ǵ帮�� ����)
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