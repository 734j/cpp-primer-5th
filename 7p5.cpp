#include <iostream>
#include "person.hpp"

/*
 *
 * 7.5
 *
 * Done in person.hpp
 * We aren't changing the object or anything so const is okay
 */

int main () {

	Person person1;
	person1.Name = "John Doe";
	person1.Address = "Unknown Street 20";
	std::cout << person1.GetName() << std::endl;
	std::cout << person1.GetAddress() << std::endl;
	return 0;
}
