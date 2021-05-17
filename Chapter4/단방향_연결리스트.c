#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* next;		// 자기참조 구조체의 포인터 선언(노드를 연결하기 위해)
} Node;
typedef struct {
	Node* head;				// 노드타입의 구조체 변수
} HeadNode;					// 헤드노드(노드타입을 가리킬 수 있는 자료형이 와야한다) 노드의 포인터를 가리킴

/* 헤더를 생성하는 함수 */
HeadNode* createHead()
{	// 함수동작의 정의(일단 만들고 입,출력을 하나씩 주면 됨)
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));  // malloc(sizeof(HeadNode)) 메모리할당 -> (HeadNode*) 형변환 -> HeadNode* h 반환형 순으로 만들어짐
	if (h != NULL) h->head = NULL; // 일반적인 변수면 h->NULL; 가능 but, 구조체변수같은 경우 구조체 변수가 가리키는 필드에 데이터 넣기(역참조 방지를 위한 if문 + 역참조 예 : NULL이 h를 가리킬때)
	return h;			// 연결리스트는 헤드를 기준으로 돌아감 출력이 있는 형태가 좋음(왜? 다른 노드들이 헤드노드를 거쳐가기 때문), 동적할당 받은 메모리를 리턴시켜줌
}
/* 전위에 삽입하는 노드함수 */
void preInsertNode(HeadNode* h, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL) {
		newNode->data = data;
		newNode->next = h->head;	// head가 newNode의 주소값을 가리켜야 첫번째로 위치하는 노드가 됨
		h->head = newNode;			// head가 newNode를 가리켜야 전위삽입이 됨 
	}
}
/* 후위에 삽입하는 노드함수 */
void rearInsertNode(HeadNode* h, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	if (newNode != NULL) { // newNode가 생성되있음
		newNode->data = data;			// return받았으면 그냥 data넣어도 됨
		newNode->next = NULL;			// 뒤에 노드 없음을 나타냄(마지막 노드를 가리킴)
		// 주소가지고 순서정함
		if (h->head == NULL) {			// 새로운노드를 만들고 헤드 바로 다음노드일때(head만 있을 때)
			h->head = newNode;			// 헤드의 타입이 포인터니까 이 포인터가 노드를 가리킴
		}
		else {		// 첫번째 아닐때(다른 노드가 이미 존재하는 경우)
			Node* curr = h->head;		// 첫번째 노드, 헤드 다음 노드를 가리키고 있는 주소값
			while (curr->next != NULL)	// 첫번째(curr)의 노드의 다음이 NULL이 아니면(노드가 있으면) 마지막 노드를 찾기위해 이동
			{
				curr = curr->next;		// 현재의 curr은 다음 노드(curr->next)로 이동(값만 떠나니기 때문에 대입값 필요) 
			}
			curr->next = newNode;
		}
	}
	// return newNode; // void타입이기 때문에 return값 필요없음
}
/* 중간노드 삽입 // 앞노드의 정보, 헤드, 데이터를 가지고 생성*/
void middleInsertNode(HeadNode* h, Node* pn, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	if (newNode != NULL)
	{
		if (pn == NULL) {
			printf("노드를 중간에 넣을 수 없습니다.\n");
		}
		newNode->data = data;
		newNode->next = NULL;
		if (h->head == NULL) h->head = newNode;

		else {
			newNode->next = pn->next;	// (앞노드에 있는 next의 값을 먼저 가리켜야 함)다음 노드의 주소값을 먼저 집어넣어야 함
			pn->next = newNode;			// 그래야 자기자신을 가리키지 않음
		}
	}
}
/* 노드 출력 함수*/
void printNode(HeadNode* h)
{
	Node* curr = h->head;
	if (h->head == NULL) printf("노드가 없습니다.\n");
	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}
/* 노드전체를 삭제하는 함수 */
void RemoveAll(HeadNode* h)
{
	Node* curr;
	curr = h->head;
	while (h->head != NULL)
	{
		curr = h->head;				// 첫번째 노드를 curr에 저장(head가 가리키는 주소를 저장한다)
		h->head = h->head->next;	// 저장된 첫번째 노드를 두번째 노드로 옮김(curr = h->head 이므로 앞이 첫번째 노드임)
		free(curr);					// 첫번째 노드 없어짐(얘가 사라지기 전에 주소 값을 이전해 줘야함)
		curr = NULL;
	}
	free(h);							// 헤드삭제
}
/* 노드 검색함수 */
Node* searchNode(HeadNode* h, int data)
{
	Node* s = h->head;
	while (s != NULL) // 얘를 h->head로 하면 반복될 수 있는 증감식이 없으므로 반복X 그래서 s로 해야함
	{
		if (s->data == data) {
			printf("노드를 찾았습니다\t");
			return s;
		}
		else
		{
			s = s->next;
		}
	}				// 반복문 다 빠져나오면 결국 s는 null
	printf("노드에 데이터가 없습니다.");
	return s;
}
/* 노드삭제 함수 */
void removeNode(HeadNode* h, Node* d)
{
	if (d == NULL)			// d의 값이 없을 때
	{
		printf("삭제하려는 값이 없습니다.");
		return 0;
	}
	if (h->head == NULL) {	// 헤드 값이 없을 때
		printf("삭제할 노드가 없습니다.");
		return 0;
	}
	else
	{
		Node* curr = h->head;	// 헤드부터 출발
		while (curr != NULL)
		{
			if (curr->next == d) {		// curr의 다음노드가 삭제하려는 노드일 때, (next값 200 일때)
				curr->next = d->next;	// curr->next의 주소값을 d->next로 옮긴다. (next값 200-> 300으로 옮김 결국 이전노드인 curr->next가 300번지의 주소로 옮겨짐)
				free(d);				// 이후 연결이 끊어진 d를 삭제함
			}
			else {
				curr = curr->next;
			}
		}
	}

}
int main()
{
	HeadNode* h = createHead();
	preInsertNode(h, 40);
	preInsertNode(h, 10);
	rearInsertNode(h, 20);
	//middleInsertNode(h, 10, 50);
	//printNode(h);
	//RemoveAll(h);
	//printNode(h);
	searchNode(h, 10);
	//removeNode(h, 10);
	printNode(h);
	return 0;
}