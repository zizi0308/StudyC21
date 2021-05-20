#include <stdio.h>
#include <stdlib.h>
/* 탐색 트리 규칙
   1. 부모(root)를 기준으로 이동
   2. 중복 값이 존재할 수 없음
      부모보다 자식 값이 크게 되면 오른쪽으로 계속 이동
      부모보다 자식 값이 작게 되면 왼쪽으로 계속 이동
      트리 형성 후 이진트리 형태로 값을 출력함*/
typedef char element;
typedef struct treeNode {
    char key;
    struct treeNode* left;
    struct treeNode* right;
}treeNode;

treeNode* searchBST(treeNode* root, char x) {
    treeNode* p;
    p = root;
    while (p != NULL) {
        if (x < p->key) p - p->left;
        else if (x == p->key)return p;
        else p = p->right;
    }
    printf("\n찾는 키가 없습니다!");
    return p;
}


//포인터 p가 가리키는 노드와 비교하여 노드x를 삽입하는 연산
treeNode* insertNode(treeNode* p, char x) {
    treeNode* newNode;
    if (p == NULL) {
        newNode = (treeNode*)malloc(sizeof(treeNode));
        newNode->key = x;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    else if (x < p->key) p->left = insertNode(p->left, x);
    else if (x < p->key) p->right = insertNode(p->right, x);
    else printf("\n이미 같은 키가 있습니다.\n");

    return p;
}

//루트 노드부터 탐색하여 키값과 같은 노드를 찾아 삭제하는 연산
void deleteNode(treeNode* root, element key) {
    treeNode* parnet, * p, * succ, * succ_parent;
    treeNode* child;
    parnet = NULL;
    p = root;
    while ((p != NULL) && (p->key != key)) {
        parnet = p;
        if (key < p->key) p = p->left;
        else p = p->right;
    }

    //삭제할 노드가 없는 경우
    if (p == NULL) {
        printf("\n찾는 키가 이진 트리에 없습니다.!!");
        return;
    }

    //삭제할 노드가 단말 노드인 경우
    if ((p->left == NULL) && (p->right == NULL)) {
        if (parnet != NULL) {
            if (parnet->left == p) parnet->left = NULL;
            else parnet->right = NULL;
        }
        else root = NULL;
    }


    // 삭제할 노드가 자식 노드를 한개 가진 경우
    else if ((p->left == NULL) || (p->right == NULL)) {
        if (p->left != NULL) child = p->left;
        else child = p->right;

        if (parnet != NULL) {
            if (parnet->left == p) parnet->left = child;
            else parnet->right = child;
        }
        else root = child;
    }

    /*삭제할 노드가 자식 노드를 두개 가진 경우 트리속해있는 트리반쪽 안에서 
    가장 왼쪽에 있는 값을 삭제하려는 값에 복사한 다음 나머지 노드들을 순서대로 이동시킴 */ 
    else {
        succ_parent = p;
        succ = p->left;
        while (succ->right != NULL) {
            succ_parent = succ;
            succ = succ->right;
        }
        if (succ_parent->left == succ) succ_parent->left = succ->left;
        else succ_parent->right = succ->left;
        p->key = succ->key;
        p = succ;
    }
    free(p);
}

//이진 탐색 트리를 중위 순회하면서 출력하는 연산
void displayInorder(treeNode* root) {
    if (root) {
        displayInorder(root->left);
        printf("%c_", root->key);
        displayInorder(root->right);
    }
}

void menu() {
    printf("\n*------------------------*");
    printf("\b\t1: 트리 출력");
    printf("\b\t2: 문자 삽입");
    printf("\b\t3: 문자 삭제");
    printf("\b\t4: 문자 검색");
    printf("\b\t5: 종료");
    printf("\n*------------------------*");
    printf("\n메뉴 입력 >> ");
}



int main()
{
    treeNode* root = NULL;
    //searchBST(root, 'k');
    root = insertNode(root, 'e');
    insertNode(root, 'b');
    insertNode(root, 'c');
    insertNode(root, 'd');
    insertNode(root, 'e');      // 이진트리는 중복된 값이 있으면 안됨
    insertNode(root, 'f');      // 루트를 기준으로 왼쪽에는 작은값 오른쪽에는 큰값(부모보다)이 위치해야함
    insertNode(root, 'g');
    insertNode(root, 'h');
    insertNode(root, 'i');
    
    displayInorder(root);

    return 0;
}