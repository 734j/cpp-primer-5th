#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.20
 *
 *
 */

int main () {
	
	SalesData book1;
	while(std::cin >> book1.BookNo >> book1.UnitsSold >> book1.Revenue) {
		std::cout << book1.BookNo << " " << book1.UnitsSold << " " << book1.Revenue << std::endl;
	}
	
	return 0;
}
