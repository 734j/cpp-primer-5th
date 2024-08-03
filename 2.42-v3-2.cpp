#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.22
 * version 2, a bit more interactive but might not be desirable if using file redirections
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
				while(1) {
					std::string yesno;
					std::cout << "Do you wish to continue? Yes/No " << std::endl;
					std::cin >> yesno;
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
	
	std::cout << Sum.BookNo << " " << Sum.UnitsSold << " " << Sum.Revenue << std::endl;
	
	return 0;
}
