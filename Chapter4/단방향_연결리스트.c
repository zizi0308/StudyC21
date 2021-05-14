#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* next;		// �ڱ����� ����ü�� ������ ����(��带 �����ϴ� ������)
} Node;
typedef struct {
	Node* head;				// ���Ÿ���� ����ü ����
} HeadNode;					// �����(���Ÿ���� ����ų �� �ִ� �ڷ����� �;��Ѵ�) ����� �����͸� ����Ŵ

/* ����� �����ϴ� �Լ� */
HeadNode* createHead()
{	// �Լ������� ����(�ϴ� ����� ��,����� �ϳ��� �ָ� ��)
	 HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));  // malloc(sizeof(HeadNode)) -> (HeadNode*) -> HeadNode* h ������ �������
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
/* ������ �����ϴ� ����Լ�*/
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
	// return newNode;
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
	while (h->head != NULL)
	{
		curr = h->head;				// ù��° ��带 curr�� ����
		h->head = h->head->next;	// ����� ù��° ��带 �ι�° ���� �ű�(curr = h->head �̹Ƿ� ���� ù��° �����)
		free(curr);					// ù��° ��� ������(�갡 ������� ���� �ּ� ���� ������ �����)
	}
}
/* ��� �˻��Լ� */
Node* searchNode(HeadNode* h, int data)
{
	Node* s = h->head;
	while (s != NULL) // �긦 h->head�� �ϸ� �ݺ��� �� �ִ� �������� �����Ƿ� �ݺ�X �׷��� s�� �ؾ���
	{
		if (s->data == data) {
			printf("��带 ã�ҽ��ϴ�");
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
/* ���� �Լ� */
void removeNode(HeadNode* h, Node * d)
{
	if (d == NULL)			// d�� ���� ���� ��
	{
		printf("�����Ϸ��� ���� �����ϴ�.");
		return 0;
	}
	Node* curr = h->head;	// ������ ���
	if (h->head == NULL){	// ��� ���� ���� ��
		printf("������ ��尡 �����ϴ�.");
		return 0;
	}
	else 
	{ 
		while (curr != NULL)	
		{
			if (curr->next == d) {
				curr->next = d->next;
				free(d); // curr->next�� �����Ϸ��� ���
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
	rearInsertNode(h, 10);			// ����� ���� �Լ�
	rearInsertNode(h, 20);
	printNode(h);
	//RemoveAll(h);
	//printNode(h);
	searchNode(h, 10);
	removeNode(h, 10);
	printNode(h);
	return 0;
}