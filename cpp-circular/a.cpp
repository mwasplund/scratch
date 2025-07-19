module;

#include <string_view>

export module MyModule:A;

import :B;

export class ClassA
{
private:
	ClassB child;

public:
	ClassA() :
		child(*this)
	{
	}

	std::string_view GetName()
	{
		return "ClassA";
	}

	std::string_view GetChildName()
	{
		return child.GetName();
	}

	std::string_view GetChildParentName()
	{
		return child.GetParentName();
	}
};