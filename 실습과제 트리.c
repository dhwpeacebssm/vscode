#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode{
    int data;
    struct TreeNode *right;
    struct TreeNode *left;
    
    
} TreeNode;

int main(){
    TreeNode *n1, *n2, *n3, *n4, *n5;
    n1= (TreeNode*)malloc(sizeof(TreeNode));
    n2= (TreeNode*)malloc(sizeof(TreeNode));
    n3= (TreeNode*)malloc(sizeof(TreeNode));
    n4= (TreeNode*)malloc(sizeof(TreeNode));
    n5= (TreeNode*)malloc(sizeof(TreeNode));

    n1->data = 10;
    n1->left = n2;
    n1->right = n3;
    n2-> data = 20;
    n2-> left = n4;
    n2->right = NULL;
    n3->data = 15;
    n3->left = n5;
    n3->right = NULL;
    n4->data = 40;
    n4->left = NULL;
    n4->right = NULL;
    n5->data = 35;
    n5->left = NULL;
    n5->right = NULL;
    int plus;
    printf("추가 강화 수치를 입력하세요.\n");
    scanf("%d", &plus);
    n4->data = 40+plus;
    printf("%d\n", n1);
    int all = n1;
    printf("%d\n", n2);
    all =all+n2;
    printf("%d\n", n4);
    all = all+n3;

    
    printf("태양검 최종 공격 루트 공격력 합계: %d", all);
}
