#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.22
 *
 *
 */

int main () {
	
	SalesData book1;
	SalesData Sum;
	if(std::cin >> Sum.BookNo >> Sum.UnitsSold >> Sum.Revenue) {
		while(std::cin >> book1.BookNo >> book1.UnitsSold >> book1.Revenue) {
			if(Sum.BookNo == book1.BookNo) {
				Sum.UnitsSold += book1.UnitsSold;
				Sum.Revenue += book1.Revenue;
			} else {
				std::cout << "These books do not have the same ISBN" << std::endl;
				return -1;
			}
		}
	}
	
	std::cout << Sum.BookNo << " " << Sum.UnitsSold << " " << Sum.Revenue << std::endl;
	
	return 0;
}
