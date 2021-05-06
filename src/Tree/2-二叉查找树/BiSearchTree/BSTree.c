/**
 * @file BSTree.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdlib.h>
#include "BSTree.h"


/**
 * @brief 前序遍历
 * 
 * @param pBST 
 */
void PreTraverseBSTree(struct BSTreeNode* pBST)
{
    if(NULL != pBST)
    {
        printf("数据为：%d, 父节点为：%p\r\n",pBST->data,pBST->parent);
        if(NULL != pBST->lchild)
        {
            PreTraverseBSTree(pBST->lchild);
        }
        if(NULL != pBST->rchild)
        {
            PreTraverseBSTree(pBST->rchild);
        }
    }
}

/**
 * @brief  中序遍历
 * 
 * @param pBST 
 */
void InTraverseBSTree(struct BSTreeNode* pBST)
{
    if(NULL != pBST)
    {
        if(NULL != pBST->lchild)
        {
            PreTraverseBSTree(pBST->lchild);
        }
       printf("数据为：%d, 父节点为：%p\r\n",pBST->data,pBST->parent);
        if(NULL != pBST->rchild)
        {
            PreTraverseBSTree(pBST->rchild);
        }
    }
}
/**
 * @brief 后序遍历
 * 
 * @param pBST 
 */
void PostTraverseBSTree(struct BSTreeNode* pBST)
{
    if(NULL != pBST)
    {
        if(NULL != pBST->lchild)
        {
            PreTraverseBSTree(pBST->lchild);
        }
        if(NULL != pBST->rchild)
        {
            PreTraverseBSTree(pBST->rchild);
        }
         printf("数据为：%d, 父节点为：%p\r\n",pBST->data,pBST->parent);
    }
}

#if  1
/**
 * @brief 在二叉搜索树中查找key值，如果存在则返回否则为空
 * 
 * @param pBST 
 * @param key 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode* SearchBSTree(struct BSTreeNode* pBST, int key)
{
    while(NULL !=pBST || key == pBST->data)
    {
        if(key < pBST->data){
            pBST = pBST->lchild;
        }else{ 
            pBST = pBST->rchild;
        }
    }    
    return pBST;
}
#else
struct BSTreeNode* SearchBSTree(struct BSTreeNode* pBST, int key) 
{
    if(NULL !=pBST && key !=pBST->data)
        return pBST;
    else if(key < pBST->data)
        return SearchBSTree(pBST->lchild, key);
    else
        return SearchBSTree(pBST->rchild, key);
}
#endif

/**
 * @brief 查收二叉树中最小的值
 * 
 * @param pBST 
 * @param pMinData 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode* SearchMinBSTree(struct BSTreeNode* pBST, int* pMinData)
{
    while(NULL != pBST->lchild)
        {
            pBST = pBST->lchild;
        }
        *pMinData = pBST->data;
        return pBST;
}



/**
 * @brief 查收二叉树中最大的值
 * 
 * @param pBST 
 * @param pMaxData 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode* SearchMaxBSTree(struct BSTreeNode* pBST, int* pMaxData)
{
    while(NULL != pBST->rchild)
    {
        pBST = pBST->rchild;
    }
    *pMaxData = pBST->data;
    return pBST;
}


/**
 * @brief  向二叉树中插入一个元素,如果元素已存在则返回false，否则返回true
 * 
 * @param pBST 
 * @param InsertVal 
 * @return true 
 * @return false 
 */
bool InsertBSTree(struct BSTreeNode *pBST, int InsertVal)
{
    struct BSTreeNode *pRoot = pBST;  //记录根节点
    struct BSTreeNode *pTemp = NULL;
     /* create and return a one tree */
    struct BSTreeNode* pNewNode = (struct BSTreeNode *)malloc(sizeof(struct BSTreeNode));
    if (pNewNode == NULL)
    {
        printf("mallic BSTreeNode faild!\r\n");
        exit(-1);
    }
    pNewNode->data = InsertVal;
    pNewNode->lchild=pNewNode->rchild = NULL;
    
    while (NULL != pBST)
    {
        pTemp = pBST;
        /* 判断新插入数据位置 */
        if(pNewNode->data < pBST->data)
        {
            pBST = pBST->lchild;
        }
        else
        {
            pBST = pBST->rchild;
        }
    }
    /*  //当树为空时，将插入节点的地址赋给根节点*/
    pBST->parent = pTemp;
    if(NULL == pTemp)
    {
        *pRoot =*pNewNode; 
    }
    else if(pNewNode->data < pTemp->data)
    {
        pTemp->lchild = pNewNode;
    }
    else
    {
        pTemp->rchild = pNewNode;
    }
}


/**
 * @brief 插入元素到二叉树
 * 
 * @param tree 
 * @param element 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode *insert_node(struct BSTreeNode* tree, int element)
{
	if (tree == NULL)
	{
		tree = (struct BSTreeNode*)malloc(sizeof(struct BSTreeNode));
		if (tree == NULL)
		{
			printf("malloc failed!\n");
			return NULL;
		}
		else
		{
			tree->data = element;
			tree->lchild = NULL;
			tree->rchild= NULL;
			printf("add element : %d success\n", element);
		}
	}
	else if (element < tree->data)
	{
		//printf("element %d < tree->element %d\n", element, tree->element);
		tree->lchild = insert_node(tree->lchild, element);
	}
	else if (element > tree->data)
	{
		//printf("element %d > tree->element %d\n", element, tree->element);
		tree->rchild = insert_node(tree->rchild, element);
	}
	
	return tree;
}
 
