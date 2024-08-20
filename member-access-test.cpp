#include <iostream>

/*
 *
 *
 *
 *
 */

int main () {

	std::string s1 = "a string";
	std::string *p = &s1;
	auto n1 = s1.size(); // Call size member function (method) on s1
	auto n2 = p->size(); // same thing but p is dereferenced and then call size member function (method) on s1
	auto n3 = (*p).size(); // same thing as above but without using '->' operator

	std::cout << n1 << " "
			  << n2 << " "
			  << n3 << " " << std::endl;
	return 0;
}
