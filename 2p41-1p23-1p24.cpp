#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.41 - 1.23 - 1.24
 *
 *
 */

struct SalesData {
	std::string BookNo;
	unsigned int UnitsSold = 0;
	double Revenue = 0.0;
};

int main () {

	SalesData Item;
	SalesData CurItem;	
	if(std::cin >> CurItem.BookNo >> CurItem.UnitsSold >> CurItem.Revenue) {
		unsigned int Count = CurItem.UnitsSold;
		while(std::cin >> Item.BookNo >> Item.UnitsSold >> Item.Revenue) {
			if(Item.BookNo == CurItem.BookNo) {
				Count += Item.UnitsSold;
			} else {
				std::cout << "ISBN: " << CurItem.BookNo << " has " << Count << " transactions" << std::endl;
				CurItem = Item;
				Count = Item.UnitsSold;
			}
		}
		std::cout << "ISBN: " << CurItem.BookNo << " has " << Count << " transactions" << std::endl;
	}

	return 0;
}
