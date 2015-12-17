// InteractiveDictionaryCLR.h

#pragma once
#include <string>

using namespace System;

namespace InteractiveDictionaryCLR {

	public ref class InteractiveDictionaryCLR
	{
	public:

		InteractiveDictionaryCLR();
		//~­InteractiveDictionaryCLR();

		String^ search(String^ word);
		
		// TODO: ajoutez ici vos méthodes pour cette classe.

	private:
		InteractiveDictionaryLibs* _InteractiveDictionary;
		char _test;
	};

}
