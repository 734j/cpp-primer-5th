#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.41 - 1.21
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
	SalesData book2;
	while(std::cin >> book1.BookNo >> book1.UnitsSold >> book1.Revenue) {
		std::cin >> book2.BookNo >> book2.UnitsSold >> book2.Revenue;
		if(book1.BookNo != book2.BookNo) {
			std::cout << "These books do not have the same ISBN" << std::endl;
			continue;
		}
		
		std::cout << book1.BookNo << " " << book1.UnitsSold + book2.UnitsSold << " " << book1.Revenue + book2.Revenue << std::endl;
	}
	
	return 0;
}
