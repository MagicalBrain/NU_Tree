#include <stdio.h>
#include <malloc.h>
#include "BiTree.h"
#include "Output.h"
#include "Head.h"

#define _CRT_SECURE_NO_WARNINGS


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

	char str1[100] = "��״ͼ\\0701.dot";
	fprint_tree(T, str1);

	func07(T);

	char str2[100] = "��״ͼ\\0702.dot";
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

	char str1[100] = "��״ͼ\\08.dot";
	fprint_tree(T, str1);

	Elemtype x;
	scanf("%c", &x);
	
	Elemtype* re = func08(T, x);
	if (re != NULL)
	{
		printf("%c�Ĵ洢��ַΪ%d\n", x, re);

		printf("�ô洢��ַ�����%c\n", *re);
	}
	else
	{
		printf("%c�Ĵ洢��ַΪ��",x);
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

	char str1[100] = "��״ͼ\\09.dot";
	fprint_tree(T, str1);

	Elemtype x;
	scanf("%c", &x);

	int re = func09(T, x);
	
	printf("%cΪ�������ĸ߶�Ϊ%d", x, re);
	
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

	char name1[100] = "��״ͼ\\1001.dot";
	fprint_tree(T1, name1);

	char name2[100] = "��״ͼ\\1002.dot";
	fprint_tree(T2, name2);

	bool re = func10(T1, T2);

	if (re)
		puts("�����������Ƶģ�");
	else
		puts("�������Ƶģ�");
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

	char name[100] = "��״ͼ\\11.dot";
	fprint_tree(T, name);


	bool re = func11(T);

	if (re == NULL)
		puts("����ʧ�ܣ�");
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

	char name[100] = "��״ͼ\\13.dot";
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

	char name[100] = "��״ͼ\\14.dot";
	fprint_tree(T, name);

	if (func14(T))
		puts("����ȫ��������");
	else
		puts("������ȫ��������");

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

	char name[100] = "��״ͼ\\15.dot";
	fprint_tree(T, name);

	int re = func15(T);
	printf("���Ϊ��%d\n", re);

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

	char name[100] = "��״ͼ\\16.dot";
	fprint_tree(T, name);

	int re = func16(T);
	printf("��ƽ����ĸ���Ϊ��%d\n", re);

	return 0;
}