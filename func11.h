#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 11、设计算法利用叶子节点中的空指针域将所有叶子节点链接成一个带头节点的双链表。
*/

/*
* 一下是从CMD调用graphviz来进行二叉树可视化的操作：
* dot -Tpng 11.dot -o 11.png
*/

BiTree func11(BiTree T)
{
	BiTree L = (BiTree)malloc(sizeof(BiNode));
	L->lchild = L;
	L->rchild = L;
	BiTree q[Max_num];
	int i = 0;

	if (T == NULL)
		return NULL;

	BiTree z[Max_num];
	int top = 0;
	BiTree p = T;

	while (p!=NULL || top>0)
	{
		if (p != NULL)
		{
			if (p->lchild == NULL && p->rchild == NULL)
			{
				q[i++] = p;
			}
			z[top++] = p;
			p = p->lchild;
		}
		else
			p = z[--top]->rchild;
	}
	
	BiTree t0 = L;
	for ( int j = 0;  j < i; j++)
	{
		q[j]->rchild = t0->rchild;
		q[j]->lchild = t0;
		t0->rchild = q[j];
		t0 = t0->rchild;
	}
	return L;
}