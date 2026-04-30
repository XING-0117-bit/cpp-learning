#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int* p=NULL;
//	if (*p != NULL)
//	{
//		*p = 20;
//	}
//	printf("%d", *p);
//	return 0;
//}
//#include<stdio.h>
//void Swape(int* pa, int* pb)
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	Swape(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

// 二叉树结点
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// 创建新结点
Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 1. 求二叉树的高度
int getHeight(Node* root) {
    if (root == NULL) return 0;
    int leftH = getHeight(root->left);
    int rightH = getHeight(root->right);
    return (leftH > rightH ? leftH : rightH) + 1;
}

// 2. 判断是否平衡二叉树
int isBalanced(Node* root) {
    if (root == NULL) return 1;  // 空树平衡
    int leftH = getHeight(root->left);
    int rightH = getHeight(root->right);
    int diff = leftH - rightH;
    if (diff < 0) diff = -diff;   // 绝对值
    if (diff > 1) return 0;       // 高度差超过1，不平衡
    // 左右子树都必须平衡
    return isBalanced(root->left) && isBalanced(root->right);
}

// 3. 交换左右子树，并输出前序序列
void swapChildren(Node* root) {
    if (root == NULL) return;
    // 交换当前结点的左右孩子
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    // 递归交换左右子树
    swapChildren(root->left);
    swapChildren(root->right);
}

// 前序遍历并打印
void preorder(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // 构建一棵二叉树
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6
    //       /
    //      7
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);
    root->left->right->left = createNode(7);

    // (1) 输出高度
    printf("二叉树的高度: %d\n", getHeight(root));

    // (2) 判断是否平衡
    if (isBalanced(root))
        printf("该二叉树是平衡二叉树\n");
    else
        printf("该二叉树不是平衡二叉树\n");

    // (3) 交换前的前序序列
    printf("交换前的前序序列: ");
    preorder(root);
    printf("\n");

    // 交换左右子树
    swapChildren(root);

    // 输出交换后的前序序列
    printf("交换后的前序序列: ");
    preorder(root);
    printf("\n");

    return 0;
}