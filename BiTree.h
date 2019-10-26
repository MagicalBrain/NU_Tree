#pragma once
#include <stdio.h>
//#include <iostream>
#include <malloc.h>

#define Elemtype char
#define Max_num 100

typedef struct BiNode
{
	Elemtype data;
	struct BiNode* lchild, * rchild;
}BiNode,*BiTree;

