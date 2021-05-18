#include <stdio.h>
#include <stdbool.h>
#define SIZE 6
typedef struct qnode {
	int data;
	struct qnode* link;
}QNode;

typedef struct qp{
	QNode* front;
	QNode* rear;
}Qp;
 /* ��� ���� */
Qp* createHead()
{
	Qp* q = (Qp*)malloc(sizeof(Qp));
	if (q != NULL) {
		q->rear = NULL;
		q->front = NULL;
		return q;
	}
}
/* ť ���� : ����� ��*/
int isEmpty(Qp* pq)
{
	if (pq->front == NULL) return true;
	else return false;
}
/* ť ���� : ����á�� �� */
int isFull(Qp* pq)
{
	if (pq->front == ((int)pq->rear + 1) % SIZE) return true;	// ���� ť�� ���ư� �� �ε������� ������� ��
	else return false;
}
/* ť ����(rear�κп� data����) */
void enQueue(Qp* pq, int data)
{
	
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	newNode->data = data;
	newNode->link = NULL;			// �갡 ���� ���ԵǴϱ� ���� ��ũ ����
	if (isFull(pq)) {
		printf("Queue overflow!!\n");
		return;
	}
	else if (isEmpty(pq)) {			// �����Ͱ� ����� ��
		pq->front = newNode;		// ù ��� ����
		pq->rear = newNode;			// ù���� rear�� front�� ����
	}
	else {
		pq->rear->link = newNode;	// ���� ���߿� ���� ����� link�� newNode �ּҰ� �Է�
		pq->rear = newNode;			// ���� ���߿� ���� ��带 newNode�� ����� ��
	}
}
/* ť ���� */
int deQueue(Qp* pq, int data)
{
	if (isEmpty(pq)) {
		printf("Queue underflow!!\n");
		exit(1);
	}
	else {
		
	}
}
int main()
{
	QNode pq;
	return 0;
}