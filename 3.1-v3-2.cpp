#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.22
 * version 2, a bit more interactive but might not be desirable if using file redirections
 *
 */
using std::cout;
using std::cin;
using std::endl;
int main () {
	
	SalesData book1;
	SalesData Sum;
	if(cin >> Sum.BookNo >> Sum.UnitsSold >> Sum.Revenue) {
		while(cin >> book1.BookNo >> book1.UnitsSold >> book1.Revenue) {
			if(Sum.BookNo == book1.BookNo) {
				Sum.UnitsSold += book1.UnitsSold;
				Sum.Revenue += book1.Revenue;
			} else {
				cout << "These books do not have the same ISBN" << endl;
				while(1) {
					std::string yesno;
					cout << "Do you wish to continue? Yes/No " << endl;
					cin >> yesno;
					if(yesno == "Yes") {
						break;
					} else if(yesno == "No") {
						return 0;
				    }
				}
				continue;
			}
		}
	}
	
	cout << Sum.BookNo << " " << Sum.UnitsSold << " " << Sum.Revenue << endl;
	
	return 0;
}
