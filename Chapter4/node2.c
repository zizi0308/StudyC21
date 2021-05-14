#include <stdio.h>
typedef struct node {
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
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;

	Node* curr = (Node*)malloc(sizeof(Node));

	addNode(head, 10);   // node1 ����
	addNode(head, 20);   // node2 ����
	addNode(head, 30);   // node3 ����

	// data ���
	curr = head->link;
	while (curr != NULL)   // 3,2,1 ������ ���
	{
		printf("%d\n", curr->data);
		curr = curr->link;
	}

	// ���� �Ҵ� ��ȯ
	Node* tmp;
	curr = head->link;
	while (curr != NULL)   // 3,2,1 ������ ��ȯ
	{
		tmp = curr->link;
		free(curr);
		curr = tmp;
	}
	free(head);

	//Node* head = (Node*)malloc(sizeof(Node));
	//head->link = NULL;			// head�� link���ȿ��� �ʱ�ȭ �����ָ� �����Ⱚ������(�η��ʱ�ȭ)
	//
	//int i = 1;
	//
	//addNode(head, 10);
	//addNode(head, 20);
	//addNode(head, 30);
	//Node* curr = head->link;	// ���� ����� ��ũ�� �����ױ� ������ ���� ���̴�.

	//while (curr != NULL)		// ������������ �Դٰ� ��������
	//{
	//	printf("%d��° ��嵥���� : %d\n", i, curr->data);
	//	curr = curr->link;
	//	i++;
	//}




	return 0;
}