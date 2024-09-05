#include <iostream>

/*
 *
 * 6.7
 *
 *
 */

int ThisFunctionHasAStaticVariable() {

	static int i = -1;
	++i;
	return i;
}

int main () {
	
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	std::cout << ThisFunctionHasAStaticVariable() << std::endl;
	return 0;
}
