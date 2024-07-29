#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 1.24 exercise
 *
 *
 */

int main () {

	Sales_item Item;
	Sales_item CurItem;	
	if(std::cin >> CurItem) {
		int Count = 1;
		while(std::cin >> Item) {
			if(Item.isbn() == CurItem.isbn()) {
				Count++;
			} else {
				std::cout << "ISBN: " << CurItem.isbn() << " has " << Count << " transactions" << std::endl;
				CurItem = Item;
				Count = 1;
			}
		}
		std::cout << "ISBN: " << CurItem.isbn() << " has " << Count << " transactions" << std::endl;
	}

	return 0;
}
