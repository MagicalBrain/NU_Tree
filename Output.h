#pragma once
#include <iostream>
#include <fstream>
#include "BiTree.h"

using namespace std;

/*
一下是从CMD调用graphviz来进行二叉树可视化的操作：
dot -Tpng 二叉树.dot -o 二叉树.png
*/
void fprint_tree0(BiTree t, ofstream* Tree)
{
	if (t != NULL)
	{
		*Tree << t->data << ";" << endl;
		if (t->lchild != NULL)
			* Tree << t->data << "->" << t->lchild->data << ";" << endl;
		if (t->rchild != NULL)
			* Tree << t->data << "->" << t->rchild->data << ";" << endl;

		fprint_tree0(t->lchild, Tree);

		fprint_tree0(t->rchild, Tree);
	}
}

void fprint_tree(BiTree t, char str[]) {
	ofstream Tree;
	Tree.open(str);
	Tree << "digraph G{" << endl;

	fprint_tree0(t, &Tree);
	Tree << "}" << endl;
	Tree.close();
}