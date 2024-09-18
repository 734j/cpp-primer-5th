#include <iostream>
#include "person.hpp"

/*
 *
 * 7.9
 *
 * Done in person.hpp
 *
 */

int main () {

	Person person1;
	read(std::cin, person1);
	print(std::cout, person1);
	std::cout << std::endl;
	return 0;
}
