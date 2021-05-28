
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

static int arr[]= {3,2,1,4,5,6,7,16,15,14,13,12,11,10,8,9};
#define TBL_SIZE(a) ( (sizeof(a)) / (sizeof(a[0])) )

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

Node* avltree_insert(AVLTree tree,int key)
{
	if(tree == NULL)
	{
		//新建结点
		tree = avltree_create_node(key, NULL, NULL);
		if(tree ==NULL)
		{
			printf("ERROR:create avltree node failed!\r\n");
			return NULL;
		}
	}
	else if(key<tree->value)     
	{
			//应该将key插入tree的左子树情况 ，小于根节点值
		tree->lChild = avltree_insert(tree->lChild, key);
		//插入节点若avl树失去平衡，则进行对应的调节。
		if(HEIGHT(tree->lChild)-HEIGHT(tree->rChild) == 2)
		{
			if(key < tree->lChild->value)
			{
				tree = left_left_rotation(tree);
			}
			else
			{
				tree = left_right_rotation(tree);
			}
		}
	}
	else if(key > tree->rChild)
	{
		//应该将key插入到tree的右子树的情况
		tree->rChild = avltree_insert(tree->rChild, key);
		//插入后如果avl树失去平衡则进行调节
		if(HEIGHT(tree->rChild)-HEIGHT(tree->lChild) == 2)
		{
			if(key >tree->rChild->value)
			{
				tree = right_right_rotation(tree);
			}
			else
			{
				tree = right_left_rotation(tree);
			}
		}
	}
	else
	{
		printf("添加失败，不允许添加相同的结点！\r\n");
	}
		//更新tree高度
	tree->height = MAX(HEIGHT(tree->lChild), HEIGHT(tree->rChild)) + 1;
	return tree;
}

/**
 * @brief delete tree node
 * 
 * @param tree 
 * @param z 
 * @return Node* 
 */
Node* delete_node(AVLTree tree,Node* z)
{
	//根为空或者没有删除的结点，直接返回NULL
	if(tree == NULL|| z ==NULL)
	{
		return NULL;
	}

	//待删除节点在左子树中
	if(z->value <tree->value)
	{
		tree->lChild = delete_node(tree->lChild, z);
		//删除节点后失去平衡，需要调整
		if (HEIGHT(tree->rChild) - HEIGHT(tree->lChild) == 2)
		{
			Node *r = tree->rChild;
			if(HEIGHT(r->lChild) > HEIGHT(r->rChild))
			{
				tree = right_left_rotation(tree);
			}
			else
			{
				tree = right_right_rotation(tree);
			}
		}
	}
	else if (z->value >tree->value)
	{ //z节点在tree的右子树中
		tree->rChild = delete_node(tree->rChild, z);
		//删除节点后失去平衡，需要调整
		if (HEIGHT(tree->lChild) - HEIGHT(tree->rChild) == 2)
		{
			Node *r = tree->lChild;
			//求取左子树右子树 高度偏向哪边
			if(HEIGHT(r->rChild) > HEIGHT(r->lChild))
			{
				tree = left_right_rotation(tree);
			}
			else
			{
				tree = left_left_rotation(tree);
			}
		}
	}
	else // tree是对应要删除的节点。
	{	
		// tree的左右孩子都非空
		if(tree->lChild && tree->rChild)
		{
			if (HEIGHT(tree->lChild) > HEIGHT(tree->rChild))
			{
				// 如果tree的左子树比右子树高；
                // 则(01)找出tree的左子树中的最大节点
                //   (02)将该最大节点的值赋值给tree。
                //   (03)删除该最大节点。
                // 这类似于用"tree的左子树中最大节点"做"tree"的替身；
                // 采用这种方式的好处是：删除"tree的左子树中最大节点"之后，AVL树仍然是平衡的。
				Node *max = avltree_maximum(tree->lChild); 
				tree->value = max->value;  
				tree->lChild =delete_node(tree->lChild,max);
			}
			else
			{
				// 如果tree的左子树不比右子树高(即它们相等，或右子树比左子树高1)
                // 则(01)找出tree的右子树中的最小节点
                //   (02)将该最小节点的值赋值给tree。
                //   (03)删除该最小节点。
                // 这类似于用"tree的右子树中最小节点"做"tree"的替身；
                // 采用这种方式的好处是：删除"tree的右子树中最小节点"之后，AVL树仍然是平衡的。
				Node *min = avltree_minmum(tree->rChild);
				tree->value = min->value;
				tree->rChild = delete_node(tree->rChild,min);

			}
		}
		else
		{	//如果空则删除根节点
			Node *tmp = tree;
			tree = tree->lChild ? tree->lChild : tree->rChild;
			free(tmp);
		}
	}
	return tree;
}

/**
 * @brief 删除节点（key是节点值），返回根节点
 * 
 * @param tree 
 * @param key 
 * @return Node* 
 */
Node* avltree_delete(AVLTree tree,int key)
{
	Node *z;

	if((z = avltree_search(tree,key) != NULL))
	{
		tree = delete_node(tree, z);
	}
	return tree;
}

/**
 * @brief 销毁avl树
 * 
 * @param tree 
 */
void destroy_avltree(AVLTree tree)
{
	if(tree == NULL)
		return 0;
	if (tree->lChild != NULL)
	{
		destroy_avltree(tree->lChild);
	}
	if(tree->rChild == NULL)
	{
		destroy_avltree(tree->rChild);
	}
	free(tree);
}

/**
 * @brief 打印avltree
 * 
 * @param tree 
 * @param key 
 * @param direction 
 */
 void printf_avltree(AVLTree tree, int key,int direction)
 {
	 if(tree != NULL)
	 {
		 
		 if(direction == 0)
		 {  //tree 是根节点
			   printf("%2d is root\n", tree->value, key);
		 }
		 else
		 {
			  printf("%2d is %2d,s child \n", tree->value, direction = 1 ? "right" : "left");
		 }
	 }
 }

void AvlTree_Init(void)
{
	  int i,ilen;
     AVLTree root=NULL;
 
   printf("== 高度: %d\n", avltree_height(root));
     printf("== 依次添加: ");
     ilen = TBL_SIZE(arr);
     for(i=0; i<ilen; i++)
     {
         printf("%d ", arr[i]);
         root = avltree_insert(root, arr[i]);
     }
 
     printf("\n== 前序遍历: ");
     preorder_avltree(root);
 
     printf("\n== 中序遍历: ");
     inorder_avltree(root);
 
    printf("\n== 后序遍历: ");
     postorder_avltree(root);
    printf("\n");

    printf("== 高度: %d\n", avltree_height(root));
    printf("== 最小值: %d\n", avltree_minimum(root)->key);
    printf("== 最大值: %d\n", avltree_maximum(root)->key);
    printf("== 树的详细信息: \n");
    print_avltree(root, root->key, 0);


    i = 8;
    printf("\n== 删除根节点: %d", i);
     root = avltree_delete(root, i);
 
     printf("\n== 高度: %d", avltree_height(root));
     printf("\n== 中序遍历: ");
     inorder_avltree(root);
    printf("\n== 树的详细信息: \n");
     print_avltree(root, root->key, 0);
 
    // 销毁二叉树
     destroy_avltree(root);
}

