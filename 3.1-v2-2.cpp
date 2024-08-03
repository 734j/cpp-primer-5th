#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.21
 *
 *
 */
using std::cout;
using std::cin;
using std::endl;
int main () {
	
	SalesData book1;
	SalesData book2;
	if(cin >> book1.BookNo >> book1.UnitsSold >> book1.Revenue) {
		while(cin >> book2.BookNo >> book2.UnitsSold >> book2.Revenue) {
			if(book1.BookNo != book2.BookNo) {
				cout << "These books do not have the same ISBN" << endl;
				continue;
			}
			
			cout << book1.BookNo << " " << book1.UnitsSold + book2.UnitsSold << " " << book1.Revenue + book2.Revenue << endl;
		}
	} else {
		cout << "Error!" << endl;
		return -1;
	}
	
	return 0;
}
