#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 10、判断两棵树是否相似，相似返回TE，不相似返回 FALSE
*/

/*
* 一下是从CMD调用graphviz来进行二叉树可视化的操作：
* dot -Tpng 10.dot -o 10.png
*/

bool func10(BiTree T1, BiTree T2)
{
	if (T1 && T2)
	{
		if (func10(T1->lchild, T2->lchild) && func10(T1->rchild, T2->rchild))
			return true;
	}
	else if (T1 == NULL && T2 == NULL)
		return true;
	else
		return false;
}