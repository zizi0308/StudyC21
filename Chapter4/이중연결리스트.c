#include <stdio.h>
#include <stdlib.h>

typedef struct dlistnode {		// 양방향 연결리스트에 필요한 포인터는 2개
	int data;
	struct dlistnode* next;		// 뒤에있는 노드를 가리키는 포인터
	struct dlistnode* prev;		// 앞에있는 노드를 가리키는 포인터
}DlistNode;

typedef struct {
	DlistNode* head;
}HeadNode;

HeadNode* createHead() {
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

DlistNode* createNode(int data) {	// 단순히 생성시켜 초기화만 함(연결은 그 다음)
	DlistNode* newNode = (DlistNode*)malloc(sizeof(DlistNode));
	if (newNode == NULL) {
		printf("메모리 할당 실패!");
		exit(1);
	}
	else {	
		newNode->data = data;
		newNode->next = NULL;		// NULL로 초기화
		newNode->prev = NULL;		// NULL로 초기화
		return newNode;
	}
}

/* 노드 삽입 */
void insertNode(HeadNode* phead, DlistNode* preNode, DlistNode* newNode)
{

	if (phead->head == NULL) { // 첫번째 노드로 삽입되는 경우(공백 리스트인 경우)
		phead->head = newNode; // 첫번째노드
	}
	else {					   // 첫번째 노드가 아닌경우(앞에 노드가 존재하는 리스트인 경우)
		newNode->prev = preNode;			// newNode의 prev값에 preNode를 넣음
		newNode->next = preNode->next;		// newNode의 next값에 preNode의 next값을 넣음
		preNode->next = newNode;			// preNode의 next값에 newNode를 넣음
		if (preNode->next != NULL)			// preNode의 next값이 NULL이 아닐때(뒤에 다른 노드가 존재할 때)
		{
			preNode->next->prev = newNode;	// preNode의 next값의 prev가 newNode이다.
		}
	}
}

/* 노드 출력 함수*/
void printNode(HeadNode* phead)
{
	/*DlistNode* curr = NULL;
	if (phead == NULL) return;
	curr = phead->head; << 앞쪽에 이렇게 해도 실행가능*/
	DlistNode* curr = phead->head;
	if (phead->head == NULL) printf("노드가 없습니다.\n");
	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}
/* 노드 전체삭제 함수 */
void allDelNode(HeadNode* phead)
{
	DlistNode* curr;
	
	while (phead->head != NULL) {
		curr = phead->head;
		phead->head = phead->head->next;	// 헤드 값에 헤드의 다음값을 넘기고
		free(curr);							// 넘긴다음 free
		curr = NULL;						
	}
	free(phead);							// 헤드노드 구조체의 주소값인 phead를 삭제
}
/* 노드 검색함수 */
DlistNode* searchNode(HeadNode* phead, int data)
{
	DlistNode* s = phead->head;
	while (s != NULL)
	{
		if (s->data == data) {	// 찾고자 하는 데이터가 입력한 데이터와 같을 때
			printf("노드를 찾았습니다\n");
			return s;					
		}
		else {
			s = s->next;						// 계속 넘어가서 값을 찾음
		}
		printf("노드를 찾을 수 없습니다.\n");	// else문 바깥에 놔둬야 데이터 찾을 때마다 중복출력 안됨
		return s;
	}
}
int main()
{
	HeadNode* h = createHead();
	DlistNode* n = createNode(10);
	DlistNode* n1 = createNode(20);
	DlistNode* n2 = createNode(30);
	insertNode(h, NULL, n);
	insertNode(h, n, n1);
	insertNode(h, n1, n2);
	printNode(h);
	DlistNode* s = searchNode(h, 10);
	printNode(h);
	//allDelNode(h);
	//printNode(h);
	return 0;
}