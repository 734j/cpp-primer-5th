#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.23 - 1.24
 *
 *
 */
using std::cout;
using std::cin;
using std::endl;
int main () {

	SalesData Item;
	SalesData CurItem;	
	if(cin >> CurItem.BookNo >> CurItem.UnitsSold >> CurItem.Revenue) {
		unsigned int Count = CurItem.UnitsSold;
		while(cin >> Item.BookNo >> Item.UnitsSold >> Item.Revenue) {
			if(Item.BookNo == CurItem.BookNo) {
				Count += Item.UnitsSold;
			} else {
				cout << "ISBN: " << CurItem.BookNo << " has " << Count << " transactions" << endl;
				CurItem = Item;
				Count = Item.UnitsSold;
			}
		}
		cout << "ISBN: " << CurItem.BookNo << " has " << Count << " transactions" << endl;
	}

	return 0;
}
