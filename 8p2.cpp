#include <iostream>

/*
 *
 * 8.2
 *
 *
 */

std::istream &read_print_report(std::istream &rpr) {

	int a;
	while(rpr >> a) {
		std::cout << a;
	}

	if(rpr.good()) { std::cout << "good" << std::endl; }
	if(rpr.eof()) { std::cout << "eof" << std::endl; }
	if(rpr.fail()) { std::cout << "fail" << std::endl; }
	if(rpr.bad()) { std::cout << "bad" << std::endl; }
	rpr.clear();
	std::cout << "--- cleared --- \n";
	if(rpr.good()) { std::cout << "good" << std::endl; }
	if(rpr.eof()) { std::cout << "eof" << std::endl; }
	if(rpr.fail()) { std::cout << "fail" << std::endl; }
	if(rpr.bad()) { std::cout << "bad" << std::endl; }
	return rpr;
}

int main () {

	read_print_report(std::cin);
	return 0;
}
