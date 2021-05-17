#include <stdio.h>
// 원형노드 만들기 (원형노드는 마지막 노드와 첫번째 노드가 연결되있다.)
typedef struct listnode {
	int data;
	struct listnode* link;
} Listnode;
typedef struct {
	Listnode* head;
} HeadNode;
HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}
Listnode* createNode(HeadNode* phead, int data)
{
	Listnode* newNode = (Listnode*)malloc(sizeof(Listnode));	// 메모리 공간을 할당받고 시작주소를 리턴
	if (newNode == NULL) {		// newNode가 없을 때
		printf("메모리 할당 실패!");
		return;
	}
	else {
		newNode->data = data;
		newNode->link = NULL;
		return newNode;			// newNode의 시작주소를 가져와라
	}
}
/* 전위 삽입 함수 */
void insertFirstNode(HeadNode* phead, Listnode* newNode)
{	
	if (phead->head == NULL) {	
		phead->head = newNode;
		newNode->link = newNode;
	}
	else {	// 이미 만들어져 있는 노드앞에 새노드를 생성할 때
		newNode->link = phead->head->link;	// 새노드의 링크를 첫번째노드의 링크에 넣음
		phead->head->link = newNode;		// 마지막노드의 링크를 새노드에 넣음 (오른쪽에서 왼쪽으로 온다) 
	}
}
/* 후위 삽입 함수 */
void insertLastNode(HeadNode* phead, Listnode* newNode)
{
	if (phead->head == NULL) {
		phead->head = newNode;
		newNode->link = newNode;
	}
	else {
		newNode->link = phead->head->link;
		phead->head->link = newNode;
		phead->head = newNode;				// 마지막노드를 헤더가 가리킴
	}
}
void printNode(HeadNode* phead)
{
		int i = 1;
		Listnode* curr = phead->head;
		do
		{
			printf("%d번째 노드의 데이터 값 : %d\n", i, curr->data);
			curr = curr->link; //다음 노드로 넘어감
			i++;
		} while (curr != phead->head);
}
int main()
{
	HeadNode* h = createHead();
	//insertFirstNode(h, createNode(NULL, 10));	// head값이 맨 첫번째로
	//insertFirstNode(h, createNode(NULL, 20));	// 전위삽입이므로 헤드외에 첫번째로 삽입된 것이 맨 마지막에 위치됨
	//insertFirstNode(h, createNode(NULL, 30));	// 10, 30, 20 순으로 출력
	
	insertLastNode(h, createNode(NULL, 30));	// 60, 30, 50 문으로 출력
	insertLastNode(h, createNode(NULL, 50));	// 후위삽입으로 마지막에 삽입된 것이 마지막에 위치
	insertLastNode(h, createNode(NULL, 60));	// 맨마지막 값이 헤드값이므로 맨 앞에 출력
	printNode(h);
	return 0;
}