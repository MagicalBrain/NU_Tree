#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 4����һ�ζ�����Ҷ�ӽڵ������
*/

/*
һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
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