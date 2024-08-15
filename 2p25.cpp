#include <iostream>

/*
 *
 * 2.25
 *
 *
 */

int main () {

	int *p = nullptr;
	int i = 10;
	int &r = i;
	//           addr         10          10
	std::cout << &p << " " << i << " " << r << std::endl;

	int i2 = 11;
	int *ip = 0; // AKA nullptr AKA NULL
	std::cout << i2 << " " << &ip << std::endl;

	int *ip2 = nullptr;
	int ip3 = 99;
	std::cout << ip3 << " " << &ip2 << std::endl;
	return 0;
}
