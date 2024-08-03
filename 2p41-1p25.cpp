#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 2.41 - 1.25
 *
 *
 */

struct SalesData {
	std::string BookNo;
	unsigned int UnitsSold = 0;
	double Revenue = 0.0;
};

int main() {
	
	SalesData total; // variable to hold data for the next transaction
	double price = 0.0;
	if (std::cin >> total.BookNo >> total.UnitsSold >> price) {
		total.Revenue = price * total.UnitsSold;
		SalesData trans; // variable to hold the running sum
		while (std::cin >> trans.BookNo >> trans.UnitsSold >> price) {
			trans.Revenue = price * trans.UnitsSold; // We can either keep this line, or comment this line out and uncomment line 34. Same behavior either way, just 2 different ways of doing the same thing. Though i do think that this is the more "correct" way of doing it
			if (total.BookNo == trans.BookNo) {
				total.UnitsSold += trans.UnitsSold;
				total.Revenue += trans.Revenue;
			} else {
				double average = total.Revenue / total.UnitsSold;
				std::cout << total.BookNo << " " << total.UnitsSold << " "
						  << total.Revenue << " avg: " << average << std::endl;
				total = trans;
				//total.Revenue = price * total.UnitsSold;
			}
		}
		
		double average = total.Revenue / total.UnitsSold;
		std::cout << total.BookNo << " " << total.UnitsSold << " "
				  << total.Revenue << " avg: " << average << std::endl;
	} else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	
	return 0;
}
