// InteractiveDictionaryCLR.h

#pragma once

using namespace System;

namespace InteractiveDictionaryCLR {

	public ref class InteractiveDictionaryCLR
	{
	public:

		InteractiveDictionaryCLR();
		//~�InteractiveDictionaryCLR();

		void test();
		char returnTest();
		// TODO: ajoutez ici vos m�thodes pour cette classe.

	private:
		InteractiveDictionaryLibs* _InteractiveDictionary;
		char _test;
	};
}
