// Il s'agit du fichier DLL principal.

#include "stdafx.h"
#include "..\..\InteractiveDictionaryLibs\InteractiveDictionaryLibs\InteractiveDictionaryLibs.h"
#include "InteractiveDictionaryCLR.h"
#include <stdio.h>

//Constructeur
InteractiveDictionaryCLR::InteractiveDictionaryCLR::InteractiveDictionaryCLR(){
	_InteractiveDictionary = new InteractiveDictionaryLibs();
}

//InteractiveDictionaryCLR::InteractiveDictionaryCLR::~InteractiveDictionaryCLR(){
//	delete _InteractiveDictionary;
//}

String^ InteractiveDictionaryCLR::InteractiveDictionaryCLR::search(String^ word){
	
	using System::Runtime::InteropServices::Marshal;
	const char* cstr = (const char*)(Marshal::StringToHGlobalAnsi(word)).ToPointer();
	std::string stdWord = cstr;
	std::string search = _InteractiveDictionary->search(stdWord);
	String^ str_dotnet = gcnew String(search.c_str());
	return str_dotnet;
}