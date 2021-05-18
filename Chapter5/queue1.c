#include <stdio.h>
#include <stdbool.h>

#define SIZE 6

int isEmpty();
int isFull();
void enQueue(int);			// q에 삽입
int deQueue();				// q에서 삭제

int rear = 0;				// 입구
int front = 0;				// 출구
int queue[SIZE];
int main()
{
	enQueue(10);
	enQueue(20);
	enQueue(30);
	printf("%d\n", deQueue());		// 10이 리턴되어 출력(선입선출)
	printf("%d\n", deQueue());

	return 0;
}

int isEmpty()
{
	if (rear == front) return true;
	else return false;
}
int isFull()
{
	if (front == (rear + 1) % SIZE) return true;		// 원형 큐가 돌아갈 때 인덱스값을 맞춰줘야 함
	else return false;
}
void enQueue(int data) 
{
	if (isFull()) printf("Queue overflow!!\n");
	else {
		rear = rear % SIZE;
		queue[rear] = data;
		rear++;
	}
}
int deQueue()
{
	if (isEmpty()) {
		printf("Queue underflow!!\n");
		exit(1);
	}
	else {
		return queue[front++ % SIZE];
	}
}