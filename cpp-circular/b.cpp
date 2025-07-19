module;

#include <string_view>

export module MyModule:B;

export class ClassA;

export class ClassB
{
private:
	ClassA& parent;

public:
	ClassB(ClassA& parent) :
		parent(parent)
	{
	}

	std::string_view GetName();
	std::string_view GetParentName();
};