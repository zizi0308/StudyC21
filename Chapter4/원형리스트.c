#include <stdio.h>
// ������� ����� (�������� ������ ���� ù��° ��尡 ������ִ�.)
typedef struct listnode {
	int data;
	struct listnode* link;
} Listnode;
typedef struct {
	Listnode* head;
} HeadNode;
HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}
Listnode* createNode(HeadNode* phead, int data)
{
	Listnode* newNode = (Listnode*)malloc(sizeof(Listnode));	// �޸� ������ �Ҵ�ް� �����ּҸ� ����
	if (newNode == NULL) {		// newNode�� ���� ��
		printf("�޸� �Ҵ� ����!");
		return;
	}
	else {
		newNode->data = data;
		newNode->link = NULL;
		return newNode;			// newNode�� �����ּҸ� �����Ͷ�
	}
}
/* ���� ���� �Լ� */
void insertFirstNode(HeadNode* phead, Listnode* newNode)
{	
	if (phead->head == NULL) {	
		phead->head = newNode;
		newNode->link = newNode;
	}
	else {	// �̹� ������� �ִ� ���տ� ����带 ������ ��
		newNode->link = phead->head->link;	// ������� ��ũ�� ù��°����� ��ũ�� ����
		phead->head->link = newNode;		// ����������� ��ũ�� ����忡 ���� (�����ʿ��� �������� �´�) 
	}
}
/* ���� ���� �Լ� */
void insertLastNode(HeadNode* phead, Listnode* newNode)
{
	if (phead->head == NULL) {
		phead->head = newNode;
		newNode->link = newNode;
	}
	else {
		newNode->link = phead->head->link;
		phead->head->link = newNode;
		phead->head = newNode;				// ��������带 ����� ����Ŵ
	}
}
void printNode(HeadNode* phead)
{
		int i = 1;
		Listnode* curr = phead->head;
		do
		{
			printf("%d��° ����� ������ �� : %d\n", i, curr->data);
			curr = curr->link; //���� ���� �Ѿ
			i++;
		} while (curr != phead->head);
}
int main()
{
	HeadNode* h = createHead();
	//insertFirstNode(h, createNode(NULL, 10));	// head���� �� ù��°��
	//insertFirstNode(h, createNode(NULL, 20));	// ���������̹Ƿ� ���ܿ� ù��°�� ���Ե� ���� �� �������� ��ġ��
	//insertFirstNode(h, createNode(NULL, 30));	// 10, 30, 20 ������ ���
	
	insertLastNode(h, createNode(NULL, 30));	// 60, 30, 50 ������ ���
	insertLastNode(h, createNode(NULL, 50));	// ������������ �������� ���Ե� ���� �������� ��ġ
	insertLastNode(h, createNode(NULL, 60));	// �Ǹ����� ���� ��尪�̹Ƿ� �� �տ� ���
	printNode(h);
	return 0;
}