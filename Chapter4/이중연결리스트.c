#include <stdio.h>
#include <stdlib.h>

typedef struct dlistnode {		// ����� ���Ḯ��Ʈ�� �ʿ��� �����ʹ� 2��
	int data;
	struct dlistnode* next;		// �ڿ��ִ� ��带 ����Ű�� ������
	struct dlistnode* prev;		// �տ��ִ� ��带 ����Ű�� ������
}DlistNode;

typedef struct {
	DlistNode* head;
}HeadNode;

HeadNode* createHead() {
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

DlistNode* createNode(int data) {	// �ܼ��� �������� �ʱ�ȭ�� ��(������ �� ����)
	DlistNode* newNode = (DlistNode*)malloc(sizeof(DlistNode));
	if (newNode == NULL) {
		printf("�޸� �Ҵ� ����!");
		exit(1);
	}
	else {	
		newNode->data = data;
		newNode->next = NULL;		// NULL�� �ʱ�ȭ
		newNode->prev = NULL;		// NULL�� �ʱ�ȭ
		return newNode;
	}
}

/* ��� ���� */
void insertNode(HeadNode* phead, DlistNode* preNode, DlistNode* newNode)
{

	if (phead->head == NULL) { // ù��° ���� ���ԵǴ� ���(���� ����Ʈ�� ���)
		phead->head = newNode; // ù��°���
	}
	else {					   // ù��° ��尡 �ƴѰ��(�տ� ��尡 �����ϴ� ����Ʈ�� ���)
		newNode->prev = preNode;			// newNode�� prev���� preNode�� ����
		newNode->next = preNode->next;		// newNode�� next���� preNode�� next���� ����
		preNode->next = newNode;			// preNode�� next���� newNode�� ����
		if (preNode->next != NULL)			// preNode�� next���� NULL�� �ƴҶ�(�ڿ� �ٸ� ��尡 ������ ��)
		{
			preNode->next->prev = newNode;	// preNode�� next���� prev�� newNode�̴�.
		}
	}
}

/* ��� ��� �Լ�*/
void printNode(HeadNode* phead)
{
	/*DlistNode* curr = NULL;
	if (phead == NULL) return;
	curr = phead->head; << ���ʿ� �̷��� �ص� ���డ��*/
	DlistNode* curr = phead->head;
	if (phead->head == NULL) printf("��尡 �����ϴ�.\n");
	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}
/* ��� ��ü���� �Լ� */
void allDelNode(HeadNode* phead)
{
	DlistNode* curr;
	
	while (phead->head != NULL) {
		curr = phead->head;
		phead->head = phead->head->next;	// ��� ���� ����� �������� �ѱ��
		free(curr);							// �ѱ���� free
		curr = NULL;						
	}
	free(phead);							// ����� ����ü�� �ּҰ��� phead�� ����
}
/* ��� �˻��Լ� */
DlistNode* searchNode(HeadNode* phead, int data)
{
	DlistNode* s = phead->head;
	while (s != NULL)
	{
		if (s->data == data) {	// ã���� �ϴ� �����Ͱ� �Է��� �����Ϳ� ���� ��
			printf("��带 ã�ҽ��ϴ�\n");
			return s;					
		}
		else {
			s = s->next;						// ��� �Ѿ�� ���� ã��
		}
		printf("��带 ã�� �� �����ϴ�.\n");	// else�� �ٱ��� ���־� ������ ã�� ������ �ߺ���� �ȵ�
		return s;
	}
}
int main()
{
	HeadNode* h = createHead();
	DlistNode* n = createNode(10);
	DlistNode* n1 = createNode(20);
	DlistNode* n2 = createNode(30);
	insertNode(h, NULL, n);
	insertNode(h, n, n1);
	insertNode(h, n1, n2);
	printNode(h);
	DlistNode* s = searchNode(h, 10);
	printNode(h);
	//allDelNode(h);
	//printNode(h);
	return 0;
}