#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.41 - 1.20
 *
 *
 */

struct SalesData {
	std::string BookNo;
	unsigned int UnitsSold = 0;
	double Revenue = 0.0;
};

int main () {
	
	SalesData book1;
	while(std::cin >> book1.BookNo >> book1.UnitsSold >> book1.Revenue) {
		std::cout << book1.BookNo << " " << book1.UnitsSold << " " << book1.Revenue << std::endl;
	}
	
	return 0;
}
