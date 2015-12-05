// InteractiveDictionaryCLR.h

#pragma once

using namespace System;

namespace InteractiveDictionaryCLR {

	public ref class InteractiveDictionaryCLR
	{
	public:

		InteractiveDictionaryCLR();
		//~­InteractiveDictionaryCLR();

		void test();
		int returnTest();
		// TODO: ajoutez ici vos méthodes pour cette classe.

	private:
		InteractiveDictionaryLibs* _InteractiveDictionary;
		int _test;
	};
}
