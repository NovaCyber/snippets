#include "HString.h"

HString::HString(BASECLASS CopyString)
{
	this->assign(CopyString.c_str());
}

HString::HString()
{}
HString::~HString()
{}



bool HString::Contains(const HString& SubString)
{
	return HString::Contains(BASECLASS(SubString));
}
bool HString::Contains(const BASECLASS& SubString)
{
	return (this->compare(SubString) >= 0);
}

HString HString::SubString(size_type StartPos, size_type Length)
{
	return HString(this->substr(StartPos, Length));
}

bool HString::Replace(const HString& OldString, const HString& NewString)
{
	bool result = false;

	if (!this->empty())
	{
		size_type pos = this->find(OldString, 0);
		while (pos >= 0 && pos <= this->length())
		{
			BASECLASS::iterator itBegin = this->begin() + pos;
			BASECLASS::iterator itEnd = itBegin + NewString.length();

			this->replace(itBegin, itEnd, NewString.c_str());

			pos = this->find(OldString, pos + NewString.length());

			result = true;
		}
	}
	return result;
}
bool HString::Replace(const BASECLASS& OldString, const BASECLASS& NewString)
{
	return this->Replace(HString(OldString), HString(NewString));
}