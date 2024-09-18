#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 7.7
 *
 * 
 */

int main () {
	
	SalesData CurItem;	
	if(read(std::cin, CurItem)) {
		SalesData Item;
		while(read(std::cin, Item)) {
			if(Item.isbn() == CurItem.isbn()) {
				CurItem.combine(Item);
			} else {
				print(std::cout, CurItem);
				std::cout << std::endl;
				CurItem = Item;
			}
		}

		print(std::cout, CurItem);
		std::cout << std::endl;		
	}

	return 0;
}
