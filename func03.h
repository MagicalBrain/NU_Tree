#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 3、求一棵二叉树的节点个数。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 03.dot -o 03.png
*/

int func03(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		return func03(T->lchild) + func03(T->rchild)+1;
	}
}