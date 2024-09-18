#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 7.11
 *
 *
 */

int main () {

	SalesData sd1 = {"0-201-78345-X"};
	SalesData sd2 = {"0-201-78345-X", 1, 1};
	SalesData sd3("0-201-78000-X");
	SalesData sd4 = {"0-201-78000-X", 21, 22};
	print(std::cout, sd1) << std::endl;
	print(std::cout, sd2) << std::endl;
	print(std::cout, sd3) << std::endl;
	print(std::cout, sd4) << std::endl;
	return 0;
}
