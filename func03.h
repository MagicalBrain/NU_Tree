#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 3����һ�ö������Ľڵ������
*/

/*
һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
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