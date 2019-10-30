#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 14���ж϶������Ƿ�Ϊ��ȫ��������
*/

/*
* һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
* dot -Tpng 14.dot -o 14.png
*/

bool func14(BiTree T)
{
	BiTree q[Max_num];
	int front = 0, rear = 0;

	q[rear++] = T;
	BiTree p = T;

	while (p != NULL && front < rear)
	{
		p = q[front++];
		if (p == NULL)
			break;
		if (p->lchild)
			q[rear++] = p->lchild;
		else
			q[rear++] = NULL;
		if (p->rchild)
			q[rear++] = p->rchild;
		else
			q[rear++] = NULL;
	}

	for (int i = front; i < rear; i++)
	{
		if (q[i] == NULL)
		{
			for (int j = i+1; j < rear; j++)
			{
				if (q[j] != NULL)
					return false;
			}
		}
	}
	return true;
}