#include <stdio.h>
typedef struct node {		// 노드를 생성시키기 위해서는 "자기참조 구조체"가 필요함
	int data;
	struct node* link;		// 구조체로 부터 나온 멤버변수를 가리킬 수 있는 포인터를 포함(연결할 수 있는 링크)
} Node;

void addNode(Node* target, int data)				// 노드 생성함수(전위생성)
{
	Node* newNode = (Node*)malloc(sizeof(Node));	// 동적메모리 할당(메모리 할당으로 나온것은 주소값이기 때문에 (Node*)로 형변환)
	newNode->data = data;								
	newNode->link = target->link;					// node2->link = node1!!!!!(head에 들어있던 NULL값이 node1으로 대체됨)
	target->link = newNode;							// head->link 값은 node2의 주소(node1 뒤로 넘어감) newNode는 포인터이므로 연결됨
}

int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;		// head의 link값안에는 초기화 안해주면 쓰레기 값 들어가있음(널로초기화)

	Node* curr = (Node*)malloc(sizeof(Node));		// 노드를 돌면서 값을 가져와 줄 임시노드 생성

	addNode(head, 10);		// node1 생성
	addNode(head, 20);		// node2 생성
	addNode(head, 30);		// node3 생성

	// data 출력
	curr = head->link;	    // curr이 head의 link를 가리키므로 curr = NULL임
	while (curr != NULL)    // 3,2,1 순서로 출력 돌면서 출력할 때는 고정된 값이 아닌 움직이는 값으로 설정해 줘야함
	{
		printf("%d\n", curr->data);
		curr = curr->link;	// 현재 위치에서 새 위치를 가리킨다
	}

	// 동적 할당 반환
	Node* tmp;				// 임시저장소 tmp 
	curr = head->link;
	while (curr != NULL)    // 3,2,1 순서로 반환(마지막 노드까지 왔다가 빠져나감)
	{
		tmp = curr->link;	// curr의 다음 주소값을 가리킴(tmp가 다음 노드로 이동)
		free(curr);			// 해당 주소의 메모리 동적할당 반환
		curr = tmp;			// tmp에 저장 되었던 다음 주소값을 curr에 넘겨줌
	}
	free(head);				// 마지막에 있던 head까지 할당 반환


	return 0;
}