// Il s'agit du fichier DLL principal.

#include "stdafx.h"
#include "..\..\InteractiveDictionaryLibs\InteractiveDictionaryLibs\InteractiveDictionaryLibs.h"
#include "InteractiveDictionaryCLR.h"


//Constructeur
InteractiveDictionaryCLR::InteractiveDictionaryCLR::InteractiveDictionaryCLR(){
	_InteractiveDictionary = new InteractiveDictionaryLibs();
}

//InteractiveDictionaryCLR::InteractiveDictionaryCLR::~InteractiveDictionaryCLR(){
//	delete _InteractiveDictionary;
//}

void InteractiveDictionaryCLR::InteractiveDictionaryCLR::test(){
		_test = _InteractiveDictionary->getTest();
}

int InteractiveDictionaryCLR::InteractiveDictionaryCLR::returnTest(){
	return _test;
}