module;

#include <string_view>

module MyModule:B.Impl;

import :B;
import :A;

std::string_view ClassB::GetName()
{
	return "ClassB";
}

std::string_view ClassB::GetParentName()
{
	return parent.GetName();
}