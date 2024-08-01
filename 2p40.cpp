#include <iostream>


/*
 *
 * 2.40
 * 
 *
 */

struct SalesData {
	std::string BookNo;
	unsigned int UnitsSold = 0;
	double Revenue = 0.0;
};

int main () {

	struct SalesData Book;
	Book.BookNo = "this is the BookNo";
	Book.UnitsSold = 243;
	Book.Revenue = 3294;
	std::cout << Book.BookNo << "\n"
			  << Book.UnitsSold << "\n"
			  << Book.Revenue
			  << std::endl;
	return 0;
}
