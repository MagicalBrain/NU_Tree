#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 8�����Ҷ�������ֵΪ�Ľ�㡣�����ڣ��򷵻ش洢λ�ã������ڣ��򷵻ؿ��á�
*/

/*
һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
dot -Tpng 08.dot -o 08.png
*/

//���÷ǵݹ���������
Elemtype* func08(BiTree T,Elemtype x)
{
	BiTree q[Max_num];
	int top = 0;
	int i = 0;
	
	BiTree p = T;
	while (p!= NULL || top>0)
	{
		if (p != NULL)
		{
			if (p->data == x)
			{
				return &(p->data);
			}
			q[top++] = p;
			p = p->lchild;
		}
		else
			p = q[--top]->rchild;
	}
	return NULL;
}