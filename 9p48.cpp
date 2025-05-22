#include <iostream>
#include <string>

/*
 * 9.48
 * 
 * It returns npos.
 * We can also test this below
 */

int main () {

	std::string numbers = "0123456789";
	std::string name = "r2d2";
	auto result = numbers.find(name);
	if(result == std::string::npos) {
		std::cout << "npos was found" << std::endl;
	} else {
		std::cout << "npos not found" << std::endl;
	}
	
	return 0;
}
