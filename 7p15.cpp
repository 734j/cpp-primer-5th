#include <iostream>
#include "person.hpp"

/*
 *
 * 7.15
 *
 *
 */

int main () {

	Person p1("John Doe");
	Person p2("Jane Doe", "Street Street 1");
	std::cout << p1.GetName() << " " << p1.GetAddress() << std::endl;
	std::cout << p2.GetName() << " " << p2.GetAddress() << std::endl;
	return 0;
}
