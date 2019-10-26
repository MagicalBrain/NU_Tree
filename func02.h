#pragma once
#include <stdio.h>
#include "BiTree.h"

/*
* 2����֪һ�ö�������˳��洢�ṹ��������������ṹ��
* ����˳�����Ԫ�ص�����ΪINF�������ý�㲻���ڡ�
*/

/*
һ���Ǵ�CMD����graphviz�����ж��������ӻ��Ĳ�����
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