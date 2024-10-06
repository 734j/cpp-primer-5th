#include <iostream>
#include <sstream>

/*
 *
 * 8.9
 *
 *
 */

std::istream &read_print_report(std::istringstream &rpr) {

	std::string a;
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

	std::string s = "wow i love c++!! This is so cool! I am loving these features, it really feels like C but without having to reimplement everything!";
	std::istringstream a(s);
	read_print_report(a);
	return 0;
}
