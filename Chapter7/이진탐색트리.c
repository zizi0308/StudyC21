#include <stdio.h>
#include <stdlib.h>
/* Ž�� Ʈ�� ��Ģ
   1. �θ�(root)�� �������� �̵�
   2. �ߺ� ���� ������ �� ����
      �θ𺸴� �ڽ� ���� ũ�� �Ǹ� ���������� ��� �̵�
      �θ𺸴� �ڽ� ���� �۰� �Ǹ� �������� ��� �̵�
      Ʈ�� ���� �� ����Ʈ�� ���·� ���� �����*/
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
    printf("\nã�� Ű�� �����ϴ�!");
    return p;
}


//������ p�� ����Ű�� ���� ���Ͽ� ���x�� �����ϴ� ����
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
    else printf("\n�̹� ���� Ű�� �ֽ��ϴ�.\n");

    return p;
}

//��Ʈ ������ Ž���Ͽ� Ű���� ���� ��带 ã�� �����ϴ� ����
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

    //������ ��尡 ���� ���
    if (p == NULL) {
        printf("\nã�� Ű�� ���� Ʈ���� �����ϴ�.!!");
        return;
    }

    //������ ��尡 �ܸ� ����� ���
    if ((p->left == NULL) && (p->right == NULL)) {
        if (parnet != NULL) {
            if (parnet->left == p) parnet->left = NULL;
            else parnet->right = NULL;
        }
        else root = NULL;
    }


    // ������ ��尡 �ڽ� ��带 �Ѱ� ���� ���
    else if ((p->left == NULL) || (p->right == NULL)) {
        if (p->left != NULL) child = p->left;
        else child = p->right;

        if (parnet != NULL) {
            if (parnet->left == p) parnet->left = child;
            else parnet->right = child;
        }
        else root = child;
    }

    /*������ ��尡 �ڽ� ��带 �ΰ� ���� ��� Ʈ�������ִ� Ʈ������ �ȿ��� 
    ���� ���ʿ� �ִ� ���� �����Ϸ��� ���� ������ ���� ������ ������ ������� �̵���Ŵ */ 
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

//���� Ž�� Ʈ���� ���� ��ȸ�ϸ鼭 ����ϴ� ����
void displayInorder(treeNode* root) {
    if (root) {
        displayInorder(root->left);
        printf("%c_", root->key);
        displayInorder(root->right);
    }
}

void menu() {
    printf("\n*------------------------*");
    printf("\b\t1: Ʈ�� ���");
    printf("\b\t2: ���� ����");
    printf("\b\t3: ���� ����");
    printf("\b\t4: ���� �˻�");
    printf("\b\t5: ����");
    printf("\n*------------------------*");
    printf("\n�޴� �Է� >> ");
}



int main()
{
    treeNode* root = NULL;
    //searchBST(root, 'k');
    root = insertNode(root, 'e');
    insertNode(root, 'b');
    insertNode(root, 'c');
    insertNode(root, 'd');
    insertNode(root, 'e');      // ����Ʈ���� �ߺ��� ���� ������ �ȵ�
    insertNode(root, 'f');      // ��Ʈ�� �������� ���ʿ��� ������ �����ʿ��� ū��(�θ𺸴�)�� ��ġ�ؾ���
    insertNode(root, 'g');
    insertNode(root, 'h');
    insertNode(root, 'i');
    
    displayInorder(root);

    return 0;
}