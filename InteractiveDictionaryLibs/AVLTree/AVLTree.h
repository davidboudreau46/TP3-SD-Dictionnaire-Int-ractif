#pragma once
#include <stdio.h>
#include "TreeElement.h"
#include "AddElementAlreadyExistingException.h"

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
		char balance;
	};
	Node* _root;
	void ClearTree(Node* node);
	void balanceAVLTree(Node* node, Node* newNode);
	void adjustBalance(Node* root, Node* newNode);
	void rotateLeft(Node* node);
	void rotateRight(Node* node);
	void adjustLeftRight(Node* end, Node* start);
	void adjustRightLeft(Node* end, Node* start);

public:
	AVLTree();
	~AVLTree();
	void add(TreeElement* treeElement);
};