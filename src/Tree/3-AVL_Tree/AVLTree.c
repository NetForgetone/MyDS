
/*
自平衡二叉查找树（AVL tree）: 首先也是二次查找树，其实 任何2个子树的高度差不大于1
在删除，插入的过程中不断调整子树的高度，保证平均和最坏情况下都是O(logn)

Adelson-Velskii 和 Landis 1962年 创造。

1） 平衡因子 -1 0 1 节点是正常的。平衡因子 = 左子树高度-右字数高度
2） 除此之外的节点是不平衡的，需要重新平衡这个树。也就是AVL旋转

插入节点：

a: 左旋转(RR型：节点x的右孩子的右孩子上插入新元素）平衡因子由-1 -》-2 时，需要绕节点x左旋转
b：右旋转(LL型：节点X的左孩子的左孩子上插入新元素） 平衡因子有1-》2，右旋转
c: 先左后右旋转:(LR型:树中节点X的左孩子的右孩子上插入新元素） 平衡因子从1变成2后，就需要 先绕X的左子节点Y左旋转，接着再绕X右旋转
d: 先右后左旋转：(RL型:节点X的右孩子的左孩子上插入新元素) 


		6	  6                  6              6           
	   /		\           	/                \
	  5          7	           3                  9
	/          	  \             \                 /
   3               8             5               7
    (LL型)     （RR）            (LR)            (RL)    


删除节点：




可以看到，为了保证高度平衡，插入和删除操作代价增加

记于2014-2-28  by @nonstriater 
*/

#include <stdio.h>
#include <stdlib.h>
#include "AVLTree.h"


static Node* avltree_create_node(uint key,Node* left,Node* right)
{
	Node *node;
	node = (Node*)malloc(sizeof(Node));
	if(node == NULL)
	{
		return NULL;
	}
	node->value = key;
	node->lChild = NULL;
	node->rChild = NULL;

	return node;

}

/**
 * @brief 获取AVL的高度
 * 
 * @param tree 
 * @return int 
 */
int avltree_height(AVLTree tree)
{
	return HEIGHT(tree);
}


/**
 * @brief 左左对应的情况（左单旋转）
 * 
 * @param k2 
 * @return Node* 
 */
static Node* left_left_rotation(AVLTree k2)
{
	AVLTree k1;
	k1 = k2->lChild;
	k2 ->lChild= k1->rChild;
	k1->rChild  =k2;

	k1->height = Max(HIGHT(k1->lChild),HIGHT(k1->rChild))+1;
	k2->height = MAX(HEIGHT(k2->lChild), HIGHT(k2->rChild)) + 1;

	return k1;
}

/**
 * @brief 右右对应旋转(ZZYY)
 * 
 * @param tree 
 * @return Node* 
 */
static Node* right_right_rotation(AVLTree k1)
{
	AVLTree k2;
	k2 = k1->rChild;  //指向k1的左子树
	k1->rChild = k2->lChild; //把k2的左子树给k1的右子树
	k2->lChild = k1;  //把k1节点填到k2节点

	k1->height = Max(HIGHT(k1->lChild),HIGHT(k1->rChild))+1;
	k2->height = MAX(HEIGHT(k2->lChild), HIGHT(k2->rChild)) + 1;	
}

/**
 * @brief 左右对应的情况（左右双旋转 ） 递归实现 
 * 
 * @param K3 
 * @return Node* 
 */
static Node* left_right_rotation(AVLTree k3)
{
	k3->lChild = right_right_rotation(k3->lChild);
	return left_left_rotation(k3);
}
/**
 * @brief  右左对应的情况（右双旋转）
 * 
 * @param K4 
 * @return Node* 
 */
static Node* right_left_rotation(AVLTree k4)
{
	k4->rChild =left_left_rotation(k4->rChild);
	return right_right_rotation(k4);
}