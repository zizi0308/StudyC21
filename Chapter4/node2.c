#include <stdio.h>
typedef struct node{
	int data;
	struct node* link;
} Node;

void addNode(Node* target, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->link = target->link;
	target->link = newNode;
}

int main()
{
	//Node* head = (Node*)malloc(sizeof(Node));
	//head->link = NULL;			// head의 link값안에는 초기화 안해주면 쓰레기값들어가있음(널로초기화)
	//
	//int i = 1;
	//
	//addNode(head, 10);
	//addNode(head, 20);
	//addNode(head, 30);
	//Node* curr = head->link;	// 컬이 헤드의 링크를 가리켰기 때문에 컬은 널이다.

	//while (curr != NULL)
	//{
	//	printf("%d번째 노드데이터 : %d\n", i, curr->data);
	//	curr = curr->link;
	//	i++;
	//}




	return 0;
}