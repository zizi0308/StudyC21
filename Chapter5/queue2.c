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
 /* 헤드 생성 */
Qp* createHead()
{
	Qp* q = (Qp*)malloc(sizeof(Qp));
	if (q != NULL) {
		q->rear = NULL;
		q->front = NULL;
		return q;
	}
}
/* 큐 상태 : 비었을 때*/
int isEmpty(Qp* pq)
{
	if (pq->front == NULL) return true;
	else return false;
}
/* 큐 상태 : 가득찼을 때 */
int isFull(Qp* pq)
{
	if (pq->front == ((int)pq->rear + 1) % SIZE) return true;	// 원형 큐가 돌아갈 때 인덱스값을 맞춰줘야 함
	else return false;
}
/* 큐 삽입(rear부분에 data삽입) */
void enQueue(Qp* pq, int data)
{
	
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	newNode->data = data;
	newNode->link = NULL;			// 얘가 끝에 삽입되니까 다음 링크 없음
	if (isFull(pq)) {
		printf("Queue overflow!!\n");
		return;
	}
	else if (isEmpty(pq)) {			// 데이터가 비었을 때
		pq->front = newNode;		// 첫 노드 삽입
		pq->rear = newNode;			// 첫노드는 rear과 front가 같음
	}
	else {
		pq->rear->link = newNode;	// 가장 나중에 들어온 노드의 link에 newNode 주소값 입력
		pq->rear = newNode;			// 가장 나중에 들어온 노드를 newNode로 만들어 줌
	}
}
/* 큐 삭제 */
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