/**
 * @file  sequence_list.h
 * @author your name (you@domain.com)
 * @brief O(1)
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef	SEQUENCE_LIST_H__
#define	SEQUENCE_LIST_H__


/* 顺序表的存储结构 */
#define  MAXSIZE 100  //顺序表可能达到的最大值
#define SEQUENCE_LIST_LENGTH_MAX  20
#define  OK    1
#define  FALSE -1

typedef int ElemType ;
typedef int Status;
typedef struct {
	
	ElemType* elem;	//存储空间的基地址
	int length;			//当前表长度	
}SqList;


/* ---------------------------- SqList API ------------------------------*/
/* 初始化顺序表 */
Status InitSqList(SqList* L);

int SqListInit(void);


#endif /* sequence_list.h */