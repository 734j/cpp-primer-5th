#include <iostream>

/*
 *
 * 2.10
 *
 *
 */

std::string gl_string; // ""
int gl_val; // 0

int main () {

	std::string l_string; // ""
	//int l_val; // Undefined behavior

	std::cout << gl_string << std::endl;
	std::cout << gl_val << std::endl;
	std::cout << l_string << std::endl;
	//std::cout << l_val << std::endl;
	return 0;
}
