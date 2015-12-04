#pragma once
#include <stdio.h>
#include "TreeElement.h"

class Tree
{
private:
	struct Node
	{
	public:
		Node(TreeElement* treeElement, Node* node);
	private:
		Node* _left;
		Node* _right;
		Node* _parent;
		TreeElement* _element;
	};
	Node* _root;

public:
	Tree();
	~Tree();
	void add(TreeElement* treeElement);
	void addBranch(TreeElement* treeElement, Node* node);


};