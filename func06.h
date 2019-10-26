#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 6、求一棵二树中度为1的节点个数。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 06.dot -o 06.png
*/

int func06(BiTree T)
{
	if (NULL == T)
		return 0;
	else if (T->lchild != NULL && T->rchild == NULL)
	{
		return  func06(T->lchild) + func06(T->rchild)+1;
	}
	else if (T->lchild == NULL && T->rchild != NULL)
	{
		return func06(T->lchild) + func06(T->rchild)+1;
	}
	else
	{
		return func06(T->lchild) + func06(T->rchild);
	}
}