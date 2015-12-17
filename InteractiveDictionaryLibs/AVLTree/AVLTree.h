#pragma once
#include <stdio.h>
#include "TreeElement.h"
#include "add_element_already_existing.h"

class AVLTree
{
private:
	struct Node
	{
	public:
		Node(TreeElement* treeElement, Node* node);
		Node* _left;
		Node* _right;
		Node* _parent;
		int* _height;
		TreeElement* _element;
	};
	Node* _root;
	void ClearTree(Node* node);

public:
	AVLTree();
	~AVLTree();
	void add(TreeElement* treeElement);
	void addBranch(TreeElement* treeElement, Node* node);


};