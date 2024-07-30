#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.21
 *
 *
 */

int main () {

	int i = 0;
	//double *dp = &i; // Invalid
	//int *ip = i; // Invalid
	int *p = &i;
	std::cout << i << " " << p << std::endl;
	
	return 0;
}
