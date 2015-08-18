//HString.h

//include-guard
#ifndef HString_H
#define HString_H

#include <string>

#ifdef _WIN32
	#define BASECLASS std::wstring
#else
	#define BASECLASS std::string
#endif

class HString : public BASECLASS
{
public:
	HString();
	~HString();
	HString(BASECLASS);

	bool Contains(const HString& SubString);
	bool Contains(const BASECLASS& SubString);

	HString SubString(size_type StartPos, size_type Length);
	
	bool Replace(const HString& OldString, const HString& NewString);
	bool Replace(const BASECLASS& OldString, const BASECLASS& NewString);

};

#endif HString_H