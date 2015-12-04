#include "stdafx.h"
#include "Tree.h"


Tree::Tree()
{
	_root = NULL;
}


Tree::~Tree()
{
	//remove(_root);
}

void Tree::add(TreeElement* treeElement)
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

void Tree::addBranch(TreeElement* treeElement, Node* node)
{

}