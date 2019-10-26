#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 5、求二叉树的高度。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 05.dot -o 05.png
*/

int func05(BiTree T)
{
	if (NULL == T)
		return 0;
	else
	{
		return (func05(T->lchild) > func05(T->rchild)) ? func05(T->lchild) + 1 : func05(T->rchild) + 1;
	}
}