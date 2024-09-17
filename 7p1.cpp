#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 7.1
 *
 *
 * Not really sure if we're supposed to add the data of the
 * other members but i assume not because now i literally
 * just changed 1.24 to fit the sales_data format
 */

int main () {

	SalesData Item;
	SalesData CurItem;	
	if(std::cin >> CurItem.BookNo >> CurItem.UnitsSold >> CurItem.Revenue) {
		int Count = 1;
		while(std::cin >> Item.BookNo >> Item.UnitsSold >> Item.Revenue) {
			if(Item.BookNo == CurItem.BookNo) {
				Count++;
			} else {
				std::cout << "ISBN: " << CurItem.BookNo << " has " << Count << " transactions" << std::endl;
				CurItem = Item;
				Count = 1;
			}
		}
		std::cout << "ISBN: " << CurItem.BookNo << " has " << Count << " transactions" << std::endl;
	}

	return 0;
}
