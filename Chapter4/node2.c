#include <stdio.h>
typedef struct node {		// ��带 ������Ű�� ���ؼ��� "�ڱ����� ����ü"�� �ʿ���
	int data;
	struct node* link;		// ����ü�� ���� ���� ��������� ����ų �� �ִ� �����͸� ����(������ �� �ִ� ��ũ)
} Node;

void addNode(Node* target, int data)				// ��� �����Լ�(��������)
{
	Node* newNode = (Node*)malloc(sizeof(Node));	// �����޸� �Ҵ�(�޸� �Ҵ����� ���°��� �ּҰ��̱� ������ (Node*)�� ����ȯ)
	newNode->data = data;								
	newNode->link = target->link;					// node2->link = node1!!!!!(head�� ����ִ� NULL���� node1���� ��ü��)
	target->link = newNode;							// head->link ���� node2�� �ּ�(node1 �ڷ� �Ѿ) newNode�� �������̹Ƿ� �����
}

int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;		// head�� link���ȿ��� �ʱ�ȭ �����ָ� ������ �� ������(�η��ʱ�ȭ)

	Node* curr = (Node*)malloc(sizeof(Node));		// ��带 ���鼭 ���� ������ �� �ӽó�� ����

	addNode(head, 10);		// node1 ����
	addNode(head, 20);		// node2 ����
	addNode(head, 30);		// node3 ����

	// data ���
	curr = head->link;	    // curr�� head�� link�� ����Ű�Ƿ� curr = NULL��
	while (curr != NULL)    // 3,2,1 ������ ��� ���鼭 ����� ���� ������ ���� �ƴ� �����̴� ������ ������ �����
	{
		printf("%d\n", curr->data);
		curr = curr->link;	// ���� ��ġ���� �� ��ġ�� ����Ų��
	}

	// ���� �Ҵ� ��ȯ
	Node* tmp;				// �ӽ������ tmp 
	curr = head->link;
	while (curr != NULL)    // 3,2,1 ������ ��ȯ(������ ������ �Դٰ� ��������)
	{
		tmp = curr->link;	// curr�� ���� �ּҰ��� ����Ŵ(tmp�� ���� ���� �̵�)
		free(curr);			// �ش� �ּ��� �޸� �����Ҵ� ��ȯ
		curr = tmp;			// tmp�� ���� �Ǿ��� ���� �ּҰ��� curr�� �Ѱ���
	}
	free(head);				// �������� �ִ� head���� �Ҵ� ��ȯ


	return 0;
}