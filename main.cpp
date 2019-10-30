#include <stdio.h>
#include <malloc.h>
#include "BiTree.h"
#include "Output.h"
#include "Head.h"

#define _CRT_SECURE_NO_WARNINGS


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
int main02()
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

int main03()
{
	Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\03.dot";
	fprint_tree(T, str1);

	printf("结点数为：%d\n", func03(T));

	return 0;
}

int main04()
{
	//Elemtype str[40] = "ABC###D##";
	Elemtype str[40] = "ABE##C##D##";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\04.dot";
	fprint_tree(T, str1);

	printf("叶子结点数为：%d\n", func04(T));

	return 0;
}

int main05()
{
	Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\05.dot";
	fprint_tree(T, str1);

	printf("树的高度为：%d\n", func05(T));

	return 0;
}

int main06()
{
	Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	//Elemtype str[40] = "AB#C#D###";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\06.dot";
	fprint_tree(T, str1);

	printf("度为1的节点个数为：%d\n", func06(T));

	return 0;
}

int main07()
{
	//Elemtype str[40] = "ABC###D##";
	Elemtype str[40] = "ABE##C##D##";
	//Elemtype str[40] = "AB#C#D###";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\0701.dot";
	fprint_tree(T, str1);

	func07(T);

	char str2[100] = "树状图\\0702.dot";
	fprint_tree(T, str2);

	return 0;
}

int main08()
{
	//Elemtype str[40] = "ABC###D##";
	Elemtype str[40] = "ABE##C##D##";
	
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\08.dot";
	fprint_tree(T, str1);

	Elemtype x;
	scanf("%c", &x);
	
	Elemtype* re = func08(T, x);
	if (re != NULL)
	{
		printf("%c的存储地址为%d\n", x, re);

		printf("该存储地址存的是%c\n", *re);
	}
	else
	{
		printf("%c的存储地址为空",x);
	}
	return 0;
}

int main09()
{
	//Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	Elemtype str[40] = "ABC##DE##F##GH##IJ##K##";

	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "树状图\\09.dot";
	fprint_tree(T, str1);

	Elemtype x;
	scanf("%c", &x);

	int re = func09(T, x);
	
	printf("%c为根的树的高度为%d", x, re);
	
	return 0;
}

int main10()
{
	Elemtype str1[40] = "ABC###D##";
	Elemtype str2[40] = "ABE##C##D##";
	
	//Elemtype str1[40] = "ABD###C#E##";
	//Elemtype str2[40] = "XYH###Z#I##";

	BiTree T1 = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T1 = CreatBiTree(str1, i);

	BiTree T2 = (BiTree)malloc(sizeof(BiNode));
	num = 0;
	*i = num;
	T2 = CreatBiTree(str2, i);
	//CreatBiTree01(T, str);

	char name1[100] = "树状图\\1001.dot";
	fprint_tree(T1, name1);

	char name2[100] = "树状图\\1002.dot";
	fprint_tree(T2, name2);

	bool re = func10(T1, T2);

	if (re)
		puts("这两树是相似的！");
	else
		puts("不是相似的！");
	return 0;
}

int main11()
{
	//Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	Elemtype str[40] = "ABC##DE##F##GH##IJ##K##";

	//Elemtype str1[40] = "ABD###C#E##";
	//Elemtype str2[40] = "XYH###Z#I##";

	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);

	char name[100] = "树状图\\11.dot";
	fprint_tree(T, name);


	bool re = func11(T);

	if (re == NULL)
		puts("构建失败！");
	return 0;
}

//int main12

int main13()
{
	//Elemtype str[40] = "ABC###D##";
	Elemtype str[40] = "ABE##C##D##";
	//Elemtype str[40] = "ABC##DE##F##GH##IJ##K##";

	//Elemtype str1[40] = "ABD###C#E##";
	//Elemtype str2[40] = "XYH###Z#I##";

	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);

	char name[100] = "树状图\\13.dot";
	fprint_tree(T, name);

	func13(T);

	return 0;
}

int main14()
{
	//Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	//Elemtype str[40] = "ABC##DE##F##GH##IJ##K##";
	Elemtype str[40] = "ABC##D##EF##G##";

	//Elemtype str1[40] = "ABD###C#E##";
	//Elemtype str2[40] = "XYH###Z#I##";

	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);

	char name[100] = "树状图\\14.dot";
	fprint_tree(T, name);

	if (func14(T))
		puts("是完全二叉树！");
	else
		puts("不是完全二叉树！");

	return 0;
}

int main15()
{
	Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	//Elemtype str[40] = "ABC##DE##F##GH##IJ##K##";
	//Elemtype str[40] = "ABC##D##EF##G##";

	//Elemtype str1[40] = "ABD###C#E##";
	//Elemtype str2[40] = "XYH###Z#I##";

	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);

	char name[100] = "树状图\\15.dot";
	fprint_tree(T, name);

	int re = func15(T);
	printf("宽度为：%d\n", re);

	return 0;
}


int main()
{
	//Elemtype str[40] = "ABC###D##";
	//Elemtype str[40] = "ABE##C##D##";
	//Elemtype str[40] = "ABC##DE##F##GH##IJ##K##";
	//Elemtype str[40] = "ABC##D##EF##G##";
	Elemtype str[40] = "ABC#D##E###G##";

	//Elemtype str1[40] = "ABD###C#E##";
	//Elemtype str2[40] = "XYH###Z#I##";

	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);

	char name[100] = "树状图\\16.dot";
	fprint_tree(T, name);

	int re = func16(T);
	printf("不平衡结点的个数为：%d\n", re);

	return 0;
}