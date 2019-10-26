#include <stdio.h>
#include <malloc.h>
#include "BiTree.h"
#include "Output.h"
#include "func01.h"
#include "func02.h"


//1、使用先序遍历的方式建立一棵二叉树。
int main01()
{
	//Elemtype str[40] = "ABC###D##";
	Elemtype str[40] = "ABE##C##D##";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str,i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\01.dot";
	fprint_tree(T, str1);

	return 0;
}

//2、
int main()
{
	int INF = '#';
	char data[] = { '1','2',INF,'3',INF,INF,'4',INF,INF};
	int j = 0;
	int* i = &j;
	BiTree T;
	T = func02(data, 9, i);

	char str[40] = "树状图\\02.dot";
	fprint_tree(T, str);

	return 0;
}