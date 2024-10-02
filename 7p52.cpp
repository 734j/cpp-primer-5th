#include <iostream>

/*
 *
 * 7.52
 *
 *
 */

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main () {

	Sales_data item = {"978-0590353403", 25, 15.99};
	std::cout << item.bookNo << "\n"
			  << item.units_sold << "\n"
			  << item.revenue << std::endl;

	// There seems to be no issues
	// Apparently it refuses to compile if we were to use C++11
	// I am currently on C++20
	return 0;
}
