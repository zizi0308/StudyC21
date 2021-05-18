#include <stdio.h>
#include <stdbool.h>

typedef struct snode {
	int data;
	struct snode* link;
}SNode;
typedef struct {
	SNode* topstk;
}TStack;
/* 헤드 생성 */
TStack* createHead()
{
	TStack* t = (TStack*)malloc(sizeof(TStack));
	if (t != NULL) t->topstk = NULL;
	return t;
}
/* 스택 상태 : 비었을 때 */
int isEmpty(TStack* ptstack)
{
	if (ptstack->topstk == NULL) return true;
	else return false;
}
/* 스택 삽입 */
void push(TStack* ptstack, int data)
{
	SNode* newNode = (SNode*)malloc(sizeof(SNode));
	if (newNode == NULL) return; 
	else {
	newNode->data = data;					
	newNode->link = ptstack->topstk;		// 새로운노드에 링크를 집어넣고 위에노드가 아래노드를 가리키는 형태가 되게 만들어줘야함
	ptstack->topstk = newNode;				// top은 새로운 노드를 가리켜야 한다
	}
}
/* 스택 삭제 */
int pop(TStack* ptstack)
{
	int data;
	SNode* temp;
	if (isEmpty(ptstack)) {
		printf("STACK is EMPTY\n");
		return;
	}
	else {
		data = ptstack->topstk->data;
		temp = ptstack->topstk;
		ptstack->topstk = ptstack->topstk->link;
		free(temp);
		return data;
	}
}
/* 스택 맨 위의 값을 확인 */
int peek(TStack* ptstack)
{
	if (isEmpty(ptstack)) {
		printf("STACK EMPTY!!\n");
		return;
	}
	else {
		return ptstack->topstk->data;
	}
}
/* 스택 출력 */
void printStack(TStack* ptstack)
{
	SNode* curr = ptstack->topstk;
	while (curr != NULL){
		printf("%d   ", curr->data);
		curr = curr->link;
	}
	printf("\n");
}
int main()
{
	TStack* h = createHead();
	push(h, 10);
	push(h, 20);
	push(h, 30);
	push(h, 40);

	printStack(h);
	pop(h);
	printStack(h);
	return 0;
}