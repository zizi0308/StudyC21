#include <stdio.h>

typedef struct node{
	int data;			// data 멤버
	struct node* link;	// 다음 노드의 주소를 저장할 멤버
} Node; // 힙영역에 메모리를 할당 받아서 생성
int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* node1 = (Node*)malloc(sizeof(Node));	// 노드 생성, 메모리 동적할당 할당된 메모리 주소값을 리턴해 같은 타입인 node1에 저장(나중에 리턴 추가작업필요)
	Node* node2 = (Node*)malloc(sizeof(Node));
	Node* node3 = (Node*)malloc(sizeof(Node));
	Node* node4 = (Node*)malloc(sizeof(Node));
	Node* node5 = (Node*)malloc(sizeof(Node));
	if (node1 == NULL) return;
	node1->data = 10;
	node1->link = NULL;					// 링크 초기화
	head->link = node1;					// 헤더노드에 첫번째 노드의 주소값을 넣음
	node1->link = node2;
	node2->data = 12;
	node2->link = NULL;
	node2->link = node3;
	node3->data = 14;
	node3->link = NULL;
	node3->link = node4;
	node4->data = 16;
	node4->link = NULL;
	node4->link = node5;
	node5->data = 18;
	node5->link = NULL;

	Node* curr = head->link;	// 원하는 노드를 찾기위해 임시의 포인터를 줌(정보를 담고 있는 헤드노드는 첫번째 값만 가리키고 있기때문)
	int i = 1;

	while (curr != NULL)	// 마지막노드까지 왔다가 빠져나감
	{
		printf("%d번째 노드 데이터 : %d\n", i, curr->data);
		curr = curr->link;
		i++;
	}

	free(head);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);

	return 0;
}