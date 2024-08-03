#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.20
 *
 *
 */
using std::cout;
using std::cin;
using std::endl;
int main () {
	
	SalesData book1;
	while(cin >> book1.BookNo >> book1.UnitsSold >> book1.Revenue) {
		cout << book1.BookNo << " " << book1.UnitsSold << " " << book1.Revenue << endl;
	}
	
	return 0;
}
