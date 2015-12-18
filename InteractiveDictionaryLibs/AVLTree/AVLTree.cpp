#include "stdafx.h"
#include "AVLTree.h"

AVLTree::AVLTree()
{
	_root = NULL;
}

AVLTree::~AVLTree()
{
	ClearTree(_root);
}

void AVLTree::ClearTree(Node* node){
	if (node != NULL){
		ClearTree(node->_left);
		ClearTree(node->_right);
		delete node;
	}
}

void AVLTree::add(TreeElement* treeElement)
{
	Node* temp;
	Node* back = NULL;
	Node* ancestor = NULL;
	Node* newNode = new Node(treeElement, NULL);

	if (_root == NULL)
	{
		_root = newNode;
	}
	else
	{
		while (temp != NULL)
		{
			back = temp;
			if (temp->balance != '=')
			{
				ancestor = temp;
			}
			if (newNode->_element < temp->_element)
			{
				temp = temp->_left;
			}
			else if (newNode->_element == temp->_element)
			{
				throw AddElementAlreadyExistingException();
			}
			else{
				temp = temp->_right;
			}

		}

		newNode->_parent = back;
		if (newNode->_element < back->_element)
		{
			back->_left = newNode;
		}
		else
		{
			back->_right = newNode;
		}
		balanceAVLTree(ancestor, newNode);
	}
}

void AVLTree::balanceAVLTree(Node* node, Node* newNode)
{
	if (node == NULL){
		if (newNode->_element < _root->_element){
			_root->balance = 'L';
		}
		else{
			_root->balance = 'R';
		}
		adjustBalance(_root, newNode);
	}

	else if (((node->balance == 'L') && (newNode->_element > node->_element)) || ((node->balance == 'R') && (newNode->_element < node->_element))){
		node->balance = '=';
		adjustBalance(node, newNode);
	}

	else if ((node->balance == 'R') && (newNode->_element > node->_right->_element)){
		node->balance = '=';
		rotateLeft(node);
		adjustBalance(node->_parent, newNode);
	}

	else if ((node->balance == 'L') && (newNode->_element < node->_left->_element)){
		node->balance = '=';
		rotateRight(node);
		adjustBalance(node->_parent, newNode);
	}

	else if ((node->balance == 'L') && (newNode->_element > node->_left->_element)){
		rotateLeft(node->_left);
		rotateRight(node);
		adjustLeftRight(node, newNode);
	}

	else{
		rotateRight(node->_right);
		rotateLeft(node);
		adjustRightLeft(node, newNode);
	}

}

void AVLTree::adjustBalance(Node* end, Node* start)
{
	Node* temp = start->_parent;
	while (temp != end)
	{
		if (start->_element < temp->_element){
			temp->balance = 'L';
		}
		else{
			temp->balance = 'R';
		}
		temp = temp->_parent;
	}
}

void AVLTree::rotateLeft(Node* node)
{
	Node* temp = node->_right;
	node->_right = temp->_left;
	if (temp->_left != NULL){
		temp->_left->_parent = node;
	}
	if (node->_parent == NULL){
		_root = temp;
		temp->_parent = NULL;
	}
	else if (node->_parent->_left == node){
		node->_parent->_left = temp;
	}
	else{
		node->_parent->_right = temp;
	}

	temp->_left = node;
	node->_parent = temp;
}

void AVLTree::adjustLeftRight(Node* end, Node* start)
{
	if (end == _root)
		end->balance = '=';
	else if (start->_element < end->_parent->_element)
	{
		end->balance = 'R';
		adjustBalance(end->_parent->_left, start);
	}
	else
	{
		end->balance = '=';
		end->_parent->_left->balance = 'L';
		adjustBalance(end, start);
	}
}

void AVLTree::adjustRightLeft(Node* end, Node* start)
{
	if (end == _root)
		end->balance = '=';
	else if (start->_element > end->_parent->_element)
	{
		end->balance = 'L';
		adjustBalance(end->_parent->_right, start);
	}
	else
	{
		end->balance = '=';
		end->_parent->_right->balance = 'R';
		adjustBalance(end, start);
	}
}