#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 2.41 - 1.25
 *
 *
 */
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
int main() {
	
	SalesData total; // variable to hold data for the next transaction
	double price = 0.0;
	if (cin >> total.BookNo >> total.UnitsSold >> price) {
		total.Revenue = price * total.UnitsSold;
		SalesData trans; // variable to hold the running sum
		while (cin >> trans.BookNo >> trans.UnitsSold >> price) {
			trans.Revenue = price * trans.UnitsSold; // We can either keep this line, or comment this line out and uncomment line 34. Same behavior either way, just 2 different ways of doing the same thing. Though i do think that this is the more "correct" way of doing it
			if (total.BookNo == trans.BookNo) {
				total.UnitsSold += trans.UnitsSold;
				total.Revenue += trans.Revenue;
			} else {
				double average = total.Revenue / total.UnitsSold;
				cout << total.BookNo << " " << total.UnitsSold << " "
						  << total.Revenue << " avg: " << average << endl;
				total = trans;
				//total.Revenue = price * total.UnitsSold;
			}
		}
		
		double average = total.Revenue / total.UnitsSold;
		cout << total.BookNo << " " << total.UnitsSold << " "
				  << total.Revenue << " avg: " << average << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}
	
	return 0;
}
