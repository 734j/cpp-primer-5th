#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 7.3
 *
 * This exercise is not correct and honestly i am not sure
 * what is supposed to be correct. It may be because i misunderstood
 * The exercise back in the 1.24 exercise.
 *
 * I have modified this program now to be more like i think it should be.
 */

int main () {

	
	SalesData CurItem;	
	if(std::cin >> CurItem.BookNo >> CurItem.UnitsSold >> CurItem.Revenue) {
		SalesData Item;
		while(std::cin >> Item.BookNo >> Item.UnitsSold >> Item.Revenue) {
			if(Item.isbn() == CurItem.isbn()) {
				CurItem.combine(Item);
			} else {
				std::cout << "ISBN: " << CurItem.BookNo << " has " << CurItem.UnitsSold << " units sold"
						  << " and a revenue of: " << CurItem.Revenue << std::endl;
				CurItem = Item;
			}
		}
		
		std::cout << "ISBN: " << CurItem.BookNo << " has " << CurItem.UnitsSold << " units sold"
						  << " and a revenue of: " << CurItem.Revenue << std::endl;
	}

	return 0;
}
