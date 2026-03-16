#include <stdio.h> //scanf, printf 사용
#include <memory.h>// 메모리 관련 함수 사용
#include <stdlib.h>//malloc, free 등의 동적 메모리 할당 함수를 사용

typedef struct TreeNode{
    int data;
    struct TreeNode *right;
    struct TreeNode *left;
    
} TreeNode;


int main(){
    TreeNode *n1, *n2, *n3;    // TreeNode 구조체를 가리킬 포인터 변수 선언
    n1 = (TreeNode*)malloc(sizeof(TreeNode));
    n2 = (TreeNode*)malloc(sizeof(TreeNode));
    n3 = (TreeNode*)malloc(sizeof(TreeNode));

    n1 -> data  = 10;
    n1 -> left = n2;
    n1 -> right = n3;

    n2 -> data = 20;
    n2 -> left = NULL;
    n2 -> right = NULL;

    n3 -> data = 30;
    n3 -> left = NULL;
    n3 -> right = NULL;

    printf("n1의 데이터 : %d\n", n1->data);
    printf("n2의 데이터 : %d\n", n2->data);
    printf("n2의 데이터 : %d\n", n1->left->data);
    printf("n3의 데아터 : %d\n", n3->data);
    printf("n3의 데이터 : %d\n", n1->right->data);

    free(n1);
    free(n2);
    free(n3);
    return 0;
}