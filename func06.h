#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 6����һ�ö����ж�Ϊ1�Ľڵ������
*/

/*
һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
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