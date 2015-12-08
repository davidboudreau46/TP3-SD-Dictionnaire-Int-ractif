#pragma once
class TreeElement
{
protected:
	TreeElement(){}
public:
	bool operator>(const TreeElement rightTreeElement);
	bool operator<(const TreeElement leftTreeElement);
	bool operator==(const TreeElement treeElement);
};

