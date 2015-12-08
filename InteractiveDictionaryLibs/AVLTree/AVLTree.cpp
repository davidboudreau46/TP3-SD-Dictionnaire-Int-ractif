#include "stdafx.h"
#include "AVLTree.h"


AVLTree::AVLTree()
{
	_root = NULL;
}


AVLTree::~AVLTree()
{
	//remove(_root);
}

void AVLTree::add(TreeElement* treeElement)
{
	if (_root == NULL)
	{
		_root = new Node(treeElement, NULL);
	}
	else
	{
		addBranch(treeElement, _root);
	}
}

void AVLTree::addBranch(TreeElement* treeElement, Node* node)
{
	if (*treeElement == *(node->_element))  // Existe déjà ?
	{
		throw add_element_already_existing();
	}
	else
	{
		if (*treeElement < *(node->_element))  // Plus petit ?
		{
			if (node->_left == NULL) // Branche gauche ?
			{
				Node* newNode = new Node(treeElement, node);
				node->_left = newNode;
			}
			else
			{
				// Il y a une branche…on descend à gauche
				addBranch(treeElement, node->_left);
			}
		}
		else
		{
			if (node->_right == NULL) // Branche droite ?
			{
				Node* newNode = new Node(treeElement, node);
				node->_right = newNode;
			}
			else
			{
				// Il y a une branche…on descend à droite
				addBranch(treeElement, node->_right);
			}
		}
	}
}