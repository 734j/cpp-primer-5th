#include <iostream>
#include "sales_item.hpp"

/*
 *
 * Description
 *
 *
 */

int main () {

	int val = 929992;
	int *pi = nullptr;
	int **pi2 = nullptr;
	pi = &val;
	pi2 = &pi;
	std::cout << &pi << " " << pi2 << std::endl;
	std::cout << val << " " << *pi << " " << **pi2 << std::endl;
	return 0;
}
