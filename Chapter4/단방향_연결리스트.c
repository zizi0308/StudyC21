#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* next;		// �ڱ����� ����ü�� ������ ����(��带 �����ϱ� ����)
} Node;
typedef struct {
	Node* head;				// ���Ÿ���� ����ü ����
} HeadNode;					// �����(���Ÿ���� ����ų �� �ִ� �ڷ����� �;��Ѵ�) ����� �����͸� ����Ŵ

/* ����� �����ϴ� �Լ� */
HeadNode* createHead()
{	// �Լ������� ����(�ϴ� ����� ��,����� �ϳ��� �ָ� ��)
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));  // malloc(sizeof(HeadNode)) �޸��Ҵ� -> (HeadNode*) ����ȯ -> HeadNode* h ��ȯ�� ������ �������
	if (h != NULL) h->head = NULL; // �Ϲ����� ������ h->NULL; ���� but, ����ü�������� ��� ����ü ������ ����Ű�� �ʵ忡 ������ �ֱ�(������ ������ ���� if�� + ������ �� : NULL�� h�� ����ų��)
	return h;			// ���Ḯ��Ʈ�� ��带 �������� ���ư� ����� �ִ� ���°� ����(��? �ٸ� ������ ����带 ���İ��� ����), �����Ҵ� ���� �޸𸮸� ���Ͻ�����
}
/* ������ �����ϴ� ����Լ� */
void preInsertNode(HeadNode* h, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL) {
		newNode->data = data;
		newNode->next = h->head;	// head�� newNode�� �ּҰ��� �����Ѿ� ù��°�� ��ġ�ϴ� ��尡 ��
		h->head = newNode;			// head�� newNode�� �����Ѿ� ���������� �� 
	}
}
/* ������ �����ϴ� ����Լ� */
void rearInsertNode(HeadNode* h, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	if (newNode != NULL) { // newNode�� ����������
		newNode->data = data;			// return�޾����� �׳� data�־ ��
		newNode->next = NULL;			// �ڿ� ��� ������ ��Ÿ��(������ ��带 ����Ŵ)
		// �ּҰ����� ��������
		if (h->head == NULL) {			// ���ο��带 ����� ��� �ٷ� ��������϶�(head�� ���� ��)
			h->head = newNode;			// ����� Ÿ���� �����ʹϱ� �� �����Ͱ� ��带 ����Ŵ
		}
		else {		// ù��° �ƴҶ�(�ٸ� ��尡 �̹� �����ϴ� ���)
			Node* curr = h->head;		// ù��° ���, ��� ���� ��带 ����Ű�� �ִ� �ּҰ�
			while (curr->next != NULL)	// ù��°(curr)�� ����� ������ NULL�� �ƴϸ�(��尡 ������) ������ ��带 ã������ �̵�
			{
				curr = curr->next;		// ������ curr�� ���� ���(curr->next)�� �̵�(���� �����ϱ� ������ ���԰� �ʿ�) 
			}
			curr->next = newNode;
		}
	}
	// return newNode; // voidŸ���̱� ������ return�� �ʿ����
}
/* �߰���� ���� // �ճ���� ����, ���, �����͸� ������ ����*/
void middleInsertNode(HeadNode* h, Node* pn, int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	if (newNode != NULL)
	{
		if (pn == NULL) {
			printf("��带 �߰��� ���� �� �����ϴ�.\n");
		}
		newNode->data = data;
		newNode->next = NULL;
		if (h->head == NULL) h->head = newNode;

		else {
			newNode->next = pn->next;	// (�ճ�忡 �ִ� next�� ���� ���� �����Ѿ� ��)���� ����� �ּҰ��� ���� ����־�� ��
			pn->next = newNode;			// �׷��� �ڱ��ڽ��� ����Ű�� ����
		}
	}
}
/* ��� ��� �Լ�*/
void printNode(HeadNode* h)
{
	Node* curr = h->head;
	if (h->head == NULL) printf("��尡 �����ϴ�.\n");
	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}
/* �����ü�� �����ϴ� �Լ� */
void RemoveAll(HeadNode* h)
{
	Node* curr;
	curr = h->head;
	while (h->head != NULL)
	{
		curr = h->head;				// ù��° ��带 curr�� ����(head�� ����Ű�� �ּҸ� �����Ѵ�)
		h->head = h->head->next;	// ����� ù��° ��带 �ι�° ���� �ű�(curr = h->head �̹Ƿ� ���� ù��° �����)
		free(curr);					// ù��° ��� ������(�갡 ������� ���� �ּ� ���� ������ �����)
		curr = NULL;
	}
	free(h);							// ������
}
/* ��� �˻��Լ� */
Node* searchNode(HeadNode* h, int data)
{
	Node* s = h->head;
	while (s != NULL) // �긦 h->head�� �ϸ� �ݺ��� �� �ִ� �������� �����Ƿ� �ݺ�X �׷��� s�� �ؾ���
	{
		if (s->data == data) {
			printf("��带 ã�ҽ��ϴ�\t");
			return s;
		}
		else
		{
			s = s->next;
		}
	}				// �ݺ��� �� ���������� �ᱹ s�� null
	printf("��忡 �����Ͱ� �����ϴ�.");
	return s;
}
/* ������ �Լ� */
void removeNode(HeadNode* h, Node* d)
{
	if (d == NULL)			// d�� ���� ���� ��
	{
		printf("�����Ϸ��� ���� �����ϴ�.");
		return 0;
	}
	if (h->head == NULL) {	// ��� ���� ���� ��
		printf("������ ��尡 �����ϴ�.");
		return 0;
	}
	else
	{
		Node* curr = h->head;	// ������ ���
		while (curr != NULL)
		{
			if (curr->next == d) {		// curr�� ������尡 �����Ϸ��� ����� ��, (next�� 200 �϶�)
				curr->next = d->next;	// curr->next�� �ּҰ��� d->next�� �ű��. (next�� 200-> 300���� �ű� �ᱹ ��������� curr->next�� 300������ �ּҷ� �Ű���)
				free(d);				// ���� ������ ������ d�� ������
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