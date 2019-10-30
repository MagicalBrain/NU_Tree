#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 16�����һ���㷨�������������ÿ������ƽ�����ӣ�ͬʱ���ض������в�ƽ��Ľ�������
*/

/*
* һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
* dot -Tpng 16.dot -o 16.png
*/

int height(BiTree T)
{
	if (T == NULL)
		return -1;
	else
		return (height(T->lchild) > height(T->rchild)) ? height(T->lchild) + 1 : height(T->rchild) + 1;
}

int func16(BiTree T)
{
	int num = 0;

	BiTree p = T;
	BiTree z[Max_num];
	int top = 0;

	while (p != NULL ||top>0)
	{
		if (p)
		{
			z[top++] = p;
			p = p->lchild;
		}
		else
		{
			p = z[--top];
			int h = height(p->lchild)-height(p->rchild);
			printf("%c:%d, ", p->data,h);
			if (h > 1 || h < -1)
				num++;
			p = p->rchild;
		}
	}

	return num;
}