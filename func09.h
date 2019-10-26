#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 9、求一棵二叉树中值为的节点作为根节点的子树深度。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 09.dot -o 09.png
*/

int Height(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		int l1 = Height(T->lchild);
		int l2 = Height(T->rchild);
		return (l1 > l2) ? l1 + 1 : l2 + 1;
	}
}

//考虑非递归的先序和层次遍历
int func09(BiTree T,Elemtype x)
{
	BiTree z[Max_num];
	int top = 0;
	//BiTree q[Max_num];
	//int front = 0, rear = 0;

	BiTree p = T;
	while (p != NULL || top > 0)
	{
		if (p != NULL)
		{
			if (p->data == x)
			{
				return Height(p);
			}
			z[top++] = p;
			p = p->lchild;
		}
		else
			p = z[--top]->rchild;
	}
	return 0;
}