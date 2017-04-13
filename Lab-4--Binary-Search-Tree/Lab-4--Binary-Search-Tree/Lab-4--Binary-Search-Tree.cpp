// Lab-4--Binary-Search-Tree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Comsci.h"
#include "binarySearchTree.h"
int main()
{
	int t1[9] = { 30, 35, 13, 22, 42, 28, 23, 16, 25 };
	int t2[9] = { 13, 16, 22, 23, 25, 28, 30, 35, 42 };
	splash("Lab 4 Binary Search Tree", "In this lab, you review the terminology and theory underlying binary trees.");
	system("cls");
	bSearchTreeType <int> tree1, tree2;
	int cts = 0;

	while (cts != 8)
	{
		tree1.insert(t1[cts]);
		cts++;
	}
	tree1.postorderTraversal();
	while (cts != 8)
	{
		tree2.insert(t2[cts]);
		cts++;
	}
	pause("Execution Paused");
    return 0;
}

