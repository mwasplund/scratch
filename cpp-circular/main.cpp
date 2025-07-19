#include <iostream>

import MyModule;

int main()
{
	auto test = ClassA();
	
	std::cout << "Hello World - " << test.GetName() << " - " << test.GetChildName() << " - " << test.GetChildParentName() << std::endl;
	return 0;
}