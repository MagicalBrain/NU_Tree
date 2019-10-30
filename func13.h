#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 13、二叉树的层次遍历。
*/

/*
* 一下是从CMD调用graphviz来进行二叉树可视化的操作：
* dot -Tpng 13.dot -o 13.png
*/

void func13(BiTree T)
{
	BiTree q[Max_num];
	int front = 0, rear = 0;

	BiTree p = T;
	q[rear++] = T;

	while (p != NULL && front < rear)
	{
		p = q[front++];
		if (p)
		{
			printf("%c ", p->data);
			if (p->lchild)
				q[rear++] = p->lchild;
			if (p->rchild)
				q[rear++] = p->rchild;
		}
		
	}
}