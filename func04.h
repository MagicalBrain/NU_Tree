#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 4、求一课二树的叶子节点个数。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 04.dot -o 04.png
*/

int func04(BiTree T)
{
	if (NULL == T)
		return 0;
	else if (T->lchild == NULL && T->rchild == NULL)
	{
		return 1;
	}
	else
	{
		return func04(T->lchild) + func04(T->rchild);
	}
}