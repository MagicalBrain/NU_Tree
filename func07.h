#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 7������һ�ö�������������������
*/

/*
һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
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