#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 7、交换一棵二叉树的左右子树。。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 07.dot -o 07.png
*/

void func07(BiTree T)
{
	if (NULL == T)
		return ;
	else
	{
		BiTree t = T->lchild;
		T->lchild = T->rchild;
		T->rchild = t;
		func07(T->lchild);
		func07(T->rchild);
	}
}