#pragma once
#include <string>
#include "../AVLTree/AVLTree.h"
class InteractiveDictionaryLibs
{
public:
	InteractiveDictionaryLibs();
	~InteractiveDictionaryLibs();
	std::string search(std::string word);

private:
	AVLTree* _AVLTree;
};

