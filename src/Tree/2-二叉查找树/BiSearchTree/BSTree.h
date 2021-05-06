/**
 * @file BSTree.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _BSTREE_H
#define _BSTREE_H

#include <stdbool.h>

struct BSTreeNode
{
    int data;
    struct BSTreeNode* lchild;
    struct BSTreeNode* rchild;
    struct BSTreeNode *parent;
};

/**
 * @brief 前序遍历
 * 
 * @param pBST 
 */
void PreTraverseBSTree(struct BSTreeNode* pBST);

/**
 * @brief 中序遍历
 * 
 * @param pBST 
 */
void InTraverseBSTree(struct BSTreeNode* pBST);

/**
 * @brief 后序遍历
 * 
 * @param pBST 
 */
void PostTraverseBSTree(struct BSTreeNode* pBST);

/**
 * @brief 搜索key 数据是否存在，存在则返回该存储树结点
 * 
 * @param pBST 
 * @param key 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode* SearchBSTree(struct BSTreeNode* pBST, int key);


/**
 *  在二叉搜索树中找到一个元素，两个拥有相同父结点的子结点中，
 *  左结子点的值肯定小于父节点，也小于右子结点，
 *  所以最小值总在二叉搜索树的左子树中，最大值总在右子树中
 */
/**
 * @brief 查收二叉树中最小的值
 * 
 * @param pBST 
 * @param pMinData
 * @return struct BSTreeNode* 
 */
struct BSTreeNode* SearchMinBSTree(struct BSTreeNode* pBST, int* pMinData);

/**
 * @brief 查收二叉树中最大的值
 * 
 * @param pBST 
 * @param pMaxData 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode *SearchMaxBSTree(struct BSTreeNode* pBST, int* pMaxData);

/**
 * @brief 向二叉树中插入一个元素
 * 
 * @param pBST 
 * @param InsertVal 
 * @return true 
 * @return false 
 */
bool InsertBSTree(struct BSTreeNode *pBST, int InsertVal);

/**
 * @brief 递归实现 插入元素操作
 * 
 * @param tree 
 * @param element 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode *insert_node(struct BSTreeNode *tree, int element);
/**
 * @brief 删除二叉树中的元素
 * 
 * @param pBST 
 * @param DeleteVal 
 * @return true 
 * @return false 
 */
bool DeleteBSTree(struct BSTreeNode* pBST, int DeleteVal);

/**
 * @brief  创建一颗二叉搜索树
 * 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode *CreateBSTree(struct BSTreeNode *tree);



#endif