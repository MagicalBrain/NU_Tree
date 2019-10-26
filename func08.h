#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 8、查找二叉树中值为的结点。若存在，则返回存储位置，不存在，则返回空置。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 08.dot -o 08.png
*/

//采用非递归的先序遍历
Elemtype* func08(BiTree T,Elemtype x)
{
	BiTree q[Max_num];
	int top = 0;
	int i = 0;
	
	BiTree p = T;
	while (p!= NULL || top>0)
	{
		if (p != NULL)
		{
			if (p->data == x)
			{
				return &(p->data);
			}
			q[top++] = p;
			p = p->lchild;
		}
		else
			p = q[--top]->rchild;
	}
	return NULL;
}