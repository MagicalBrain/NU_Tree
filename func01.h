#pragma once
#include <malloc.h>
#include "BiTree.h"

//1、使用先序遍历的方式建立一棵二叉树。

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 01.dot -o 01.png
*/

////非递归实现
void CreatBiTree01(BiNode* T, Elemtype* num)
{
	if (T == NULL || num[0] == '#' || num[0] == '\0')
		puts("创建失败!");

	T->data = num[0];
	//T->lchild = NULL;
	//T->rchild = NULL;
	BiTree p = (BiTree)malloc(sizeof(BiNode));
	T->lchild = p;


	BiTree z[Max_num];
	int top = 0;
	z[top++] = T;

	int i = 1;
	while (num[i] != '\0')
	{
		//p = p->lchild;
		if (num[i] == '#')
		{
			p = NULL;

			p = z[--top];
			if (top < 0)
				break;
			//BiTree q = (BiTree)malloc(sizeof(BiNode));
			//p->rchild = q;
			p = p->rchild;
		}
		else
		{
			BiTree q = (BiTree)malloc(sizeof(BiNode));
			//q->lchild = NULL;
			//q->rchild = NULL;
			q->data = num[i];
			p->lchild = q;
			z[top++] = p;
			p = p->lchild;
		}
		i++;
	}
}

//递归实现
BiTree CreatBiTree(Elemtype* num, int* i)
{
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int j = *i;
	if (num[j] == '#')
	{
		T = NULL;
		j++;
	}
	else
	{
		T->data = num[j++];
		*i = j;
		T->lchild = CreatBiTree(num, i);
		(*i)++;
		T->rchild = CreatBiTree(num, i);
	}
	return T;
}

//递归先序遍历二叉树
void PreOrder(BiTree T)
{
	if (T)
	{
		printf("%c ", T->data);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}