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
	//head->link = NULL;			// head�� link���ȿ��� �ʱ�ȭ �����ָ� �����Ⱚ������(�η��ʱ�ȭ)
	//
	//int i = 1;
	//
	//addNode(head, 10);
	//addNode(head, 20);
	//addNode(head, 30);
	//Node* curr = head->link;	// ���� ����� ��ũ�� �����ױ� ������ ���� ���̴�.

	//while (curr != NULL)
	//{
	//	printf("%d��° ��嵥���� : %d\n", i, curr->data);
	//	curr = curr->link;
	//	i++;
	//}




	return 0;
}