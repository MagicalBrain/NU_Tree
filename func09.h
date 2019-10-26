#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 9����һ�ö�������ֵΪ�Ľڵ���Ϊ���ڵ��������ȡ�
*/

/*
һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
dot -Tpng 09.dot -o 09.png
*/

int Height(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		int l1 = Height(T->lchild);
		int l2 = Height(T->rchild);
		return (l1 > l2) ? l1 + 1 : l2 + 1;
	}
}

//���Ƿǵݹ������Ͳ�α���
int func09(BiTree T,Elemtype x)
{
	BiTree z[Max_num];
	int top = 0;
	//BiTree q[Max_num];
	//int front = 0, rear = 0;

	BiTree p = T;
	while (p != NULL || top > 0)
	{
		if (p != NULL)
		{
			if (p->data == x)
			{
				return Height(p);
			}
			z[top++] = p;
			p = p->lchild;
		}
		else
			p = z[--top]->rchild;
	}
	return 0;
}