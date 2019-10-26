#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 2、已知一棵二叉树的顺序存储结构，建立二叉链表结构。
* 假设顺序表中元素的数据为INF，则代表该结点不存在。
*/

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 02.dot -o 02.png
*/

BiTree func02(char data[],int len,int *i)
{
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int j = *i;
	int INF = '#';
	if (data[j] == INF)
		T = NULL;
	else
	{
		T->data = data[j++];
		if (j >= len)
		{
			T->lchild = NULL;
			T->rchild = NULL;
			return T;
		}
		*i = j;
		T->lchild = func02(data, len, i);
		(*i)++;
		T->rchild = func02(data, len, i);
	}

	return T;
}