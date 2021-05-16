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
        return(-1);
    }
    pNewNode->data = InsertVal;
    pNewNode->lchild=pNewNode->rchild = NULL;
    
    /*优先处理常见情况即pBST不为空有结点 */
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
    return true;
}

/**
 * @brief 插入元素到二叉树
 * 1.树为空 情况
 * 2.插入元素小于根节点元素 ，即在左子树插入
 * 3.插入元素大于根节点元素值，即在右子树插入
 * @param tree 
 * @param element 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode* insert_node(struct BSTreeNode* tree, int element)
{
    /* tree 为空的处理 */
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
	else if (element < tree->data)   /* 插入左子树中 */
	{
		//printf("element %d < tree->element %d\n", element, tree->element);
		tree->lchild = insert_node(tree->lchild, element);
	}
	else if (element > tree->data)  /*插入右子树中 */
	{
		//printf("element %d > tree->element %d\n", element, tree->element);
		tree->rchild = insert_node(tree->rchild, element);
	}
	
	return tree;
}
 
/**
 * @brief DeleteBSTree
 *  1.如果节点是一片树叶，即立即删除
 *  2.如果节点有一个儿子，则用
 * 
 * @param pBST 
 * @param DeleteVal 
 * @return true 
 * @return false 
 */
void DeleteBSTree(struct BSTreeNode* pBST, int DeleteVal)
{
    struct BSTreeNode* pTemp = SearchBSTree(pBST, DeleteVal);
    if(pTemp ==NULL)
    {
        printf("NO element in searchtree ,delete faild!\r\n");
        exit(-1);
    }
     /* 删除节点无左右孩子 */
    if(NULL ==pTemp->lchild && NULL == pTemp->rchild)
    {
        /* 删除节点是其父节点的左孩子 */
        if(pTemp == pTemp->parent->lchild) 
        {
            pTemp->parent->lchild = NULL;
        }
        else  /*  //删除节点是其父节点的右孩子*/
        {
            pTemp->parent->rchild = NULL;
        }
        free(pTemp); /*释释放指针*/
        pTemp = NULL;
    }
    else if(NULL ==pTemp->lchild)
    {    /* 删除节点没有无左孩子 */
        if(pTemp->parent->rchild ==pTemp) /*删除节点本身本身父元素节点左孩子*/
        {
            pTemp->parent->lchild = pTemp->rchild;
            pTemp->rchild->parent = pTemp->parent;
        }
         else if(NULL ==pTemp->rchild)
        {     /*删除节点无右孩子 */
             pTemp->parent->rchild = pTemp->rchild;
             pTemp->rchild->parent = pTemp->parent;
         } 
         free(pTemp);
         pTemp = NULL;
    }
    else  
    {
        /*删除节点有左右孩子，用删除节点左字树中的最大值或者右子树中最小值来代替删除节点
            本例中用右子树中最小值来代替
        */
        struct BSTreeNode* pTial = pTemp->rchild;  //往右子树下找
        while(NULL != pTial->lchild)  //查找右子树中的最小值
        {
            pTial = pTial->lchild;
        }
        if(pTemp == pTial->parent) //右子树中的最小值的父节点是删除节点
        {
            if(pTemp == pTemp->parent->lchild)  //删除节点为其父节点的左孩子
            {
                pTemp->parent->lchild = pTial;
                pTial->lchild = pTemp->lchild;
                pTemp->lchild->parent = pTial;
            }
            else
            {
                pTemp->parent->rchild = pTial;
                pTial->lchild = pTemp->lchild;
                pTemp->lchild->parent = pTial;
            }
            free(pTemp);
            pTemp = NULL;
        }
        else
        {
            pTial->rchild->parent = pTial->parent;
            pTial->parent->lchild = pTial->rchild;
            pTial->parent->parent = pTial;
            pTial->rchild = pTial->parent;
            pTial->lchild = pTemp->lchild;
            pTemp->lchild->parent = pTial;
            if (pTemp == pTemp->parent->lchild)
            {
                pTemp->parent->lchild = pTial;
            }
            else
            {
            pTemp ->parent ->rchild = pTial;
            
            }
            free(pTemp);
            pTemp = NULL;
         }
    }
 }
    


/**
 * @brief  创建一颗二叉搜索树
 * 
 * @return struct BSTreeNode* 
 */
struct BSTreeNode* CreateBSTree(struct BSTreeNode* tree)
{
    if(tree !=NULL)
    {
        CreateBSTree(tree->lchild);
        CreateBSTree(tree->rchild);
        free(tree);
    }
    return NULL;
}
