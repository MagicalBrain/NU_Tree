#include <stdio.h>
#include <malloc.h>
#include "BiTree.h"
#include "Output.h"
#include "func01.h"
#include "func02.h"
#include "func03.h"
#include "func04.h"
#include "func05.h"
#include "func06.h"
#include "func07.h"


//1��ʹ����������ķ�ʽ����һ�ö�������
int main01()
{
	//Elemtype str[40] = "ABC###D##";
	Elemtype str[40] = "ABE##C##D##";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str,i);
	//CreatBiTree01(T, str);

	char str1[100] = "��״ͼ\\01.dot";
	fprint_tree(T, str1);

	return 0;
}

//2��
int main02()
{
	int INF = '#';
	char data[] = { '1','2',INF,'3',INF,INF,'4',INF,INF};
	int j = 0;
	int* i = &j;
	BiTree T;
	T = func02(data, 9, i);

	char str[40] = "��״ͼ\\02.dot";
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

	char str1[100] = "��״ͼ\\03.dot";
	fprint_tree(T, str1);

	printf("�����Ϊ��%d\n", func03(T));

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

	char str1[100] = "��״ͼ\\04.dot";
	fprint_tree(T, str1);

	printf("Ҷ�ӽ����Ϊ��%d\n", func04(T));

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

	char str1[100] = "��״ͼ\\05.dot";
	fprint_tree(T, str1);

	printf("���ĸ߶�Ϊ��%d\n", func05(T));

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

	char str1[100] = "��״ͼ\\06.dot";
	fprint_tree(T, str1);

	printf("��Ϊ1�Ľڵ����Ϊ��%d\n", func06(T));

	return 0;
}

int main()
{
	//Elemtype str[40] = "ABC###D##";
	Elemtype str[40] = "ABE##C##D##";
	//Elemtype str[40] = "AB#C#D###";
	BiTree T = (BiTree)malloc(sizeof(BiNode));
	int num = 0;
	int* i = &num;
	T = CreatBiTree(str, i);
	//CreatBiTree01(T, str);

	char str1[100] = "��״ͼ\\0701.dot";
	fprint_tree(T, str1);

	func07(T);

	char str2[100] = "��״ͼ\\0702.dot";
	fprint_tree(T, str2);

	return 0;
}