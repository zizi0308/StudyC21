#include <stdio.h>

typedef struct node{
	int data;			// data ���
	struct node* link;	// ���� ����� �ּҸ� ������ ���
} Node; // �������� �޸𸮸� �Ҵ� �޾Ƽ� ����
int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* node1 = (Node*)malloc(sizeof(Node));	// ��� ����, �޸� �����Ҵ� �Ҵ�� �޸� �ּҰ��� ������ ���� Ÿ���� node1�� ����(���߿� ���� �߰��۾��ʿ�)
	Node* node2 = (Node*)malloc(sizeof(Node));
	Node* node3 = (Node*)malloc(sizeof(Node));
	Node* node4 = (Node*)malloc(sizeof(Node));
	Node* node5 = (Node*)malloc(sizeof(Node));
	if (node1 == NULL) return;
	node1->data = 10;
	node1->link = NULL;					// ��ũ �ʱ�ȭ
	head->link = node1;					// �����忡 ù��° ����� �ּҰ��� ����
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

	Node* curr = head->link;	// ���ϴ� ��带 ã������ �ӽ��� �����͸� ��(������ ��� �ִ� ������ ù��° ���� ����Ű�� �ֱ⶧��)
	int i = 1;

	while (curr != NULL)	// ������������ �Դٰ� ��������
	{
		printf("%d��° ��� ������ : %d\n", i, curr->data);
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