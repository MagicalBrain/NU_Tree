#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
*  15����һ�ö�����������ȡ�
*/

/*
* һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
* dot -Tpng 15.dot -o 15.png
*/

int func15(BiTree T)
{
	BiTree q[Max_num];
	int front = 0, rear = 0;

	q[rear++] = T;
	BiTree p = T;
	int re = 1, last = 1,num = 0;

	while (p != NULL && front < rear)
	{
		p = q[front++];
		num++;
		if (p == NULL)
			break;
		if (p->lchild)
			q[rear++] = p->lchild;
		if (p->rchild)
			q[rear++] = p->rchild;
		
		//����ÿ��Ľ�������Ƚϴ�С
		if (last == front)
		{
			if (num > re)
				re = num;
			last = rear;
			num = 0;
		}
	}

	
	return re;
}