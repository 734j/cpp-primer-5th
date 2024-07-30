#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.16, 2.17
 *
 *
 */

int main () {

	int i = 0, &r1 = i;
	double d = 0, &r2 = d;

	r2 = 3.14159; // Valid
	r2 = r1; // Invalid
	i = r2; // Invalid
	r1 = d; // Invalid
	//All valid?
	std::cout << " ";
	int u = 0;
	int &ru = u;
	u = 5;
	ru = 10;
	std::cout << u << " " << ru << std::endl;
	return 0;
}
