/**
 * @file AVLTree.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef AVL_TREE_H
#define AVL_TREE_H

#include <stdlib.h>




//typedef int KEY_TYPE;
typedef struct AVLTreeNode{

	int	value;
	int 		height; // 平衡因子
	struct AVLTreeNode *lChild;
	struct AVLTreeNode *rChild;

}Node,*AVLTree;

/*空的二叉树的高度为0，根的层次为1，根的子节点为第2层 */
#define HEIGHT(p)  ((p==NULL) ? 0:((Node*)(p))->height)
#define MAX(a,b)   ((a)>(b)?(a):(b))

void destroy_avltree(AVLTree tree);
void preorder_avltree(AVLTree tree);

void inorder_avltree(AVLTree tree);

void postorder_avltree(AVLTree tree);

 Node* avltree_mininum(AVLTree tree);

 Node* avltree_maxinum(AVLTree tree);

Node* avltree_search(AVLTree x, int key);
Node* iterative_avltree_search(AVLTree x, int key);

void AvlTree_Init(void );
#endif
