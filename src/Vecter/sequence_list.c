/**
 * @file linear recurrence.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdbool.h>
#include "sequence_list.h"
#include <stdlib.h>
/**
 * @brief 顺序表初始化
 * 	(1)为顺序表L动态分配一个预定义大小的数组空间
 * 	(2)将表的当前长度设为0
 * @param L :顺序表对象指针
 * @return OK: 成功 FALSE: 失败
 **/
Status InitSqList(SqList* L)
{
	L->elem =(ElemType*)malloc(sizeof(SqList));
   if(!L->elem){
      exit(1);
   }
   //L->elem =0;
   L->length= SEQUENCE_LIST_LENGTH_MAX;
   printf("L->elem =%p, L->length=%d\r\n", L->elem, L->length);
	return OK;
}



int SqListInit(void)
{
   SqList a;
      InitSqList(&a);
      printf("InitSqList IS OK AAAAA!\r\n");
  return 0;
   }
    
 
    
