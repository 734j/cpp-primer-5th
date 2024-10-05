#include <iostream>
#include <fstream>
#include "sales_data.hpp"

/*
 *
 * 8.6
 *
 *
 */

int main (int argc, char **argv) {

	if(argc < 2 || argc > 2) {
		return -1;
	}
	
	std::fstream file(argv[1]);
	if(file.fail()) {
		return -1;
	}
	
	SalesData total;
	// variable to hold the running sum
	if (read(file, total)) { // read the first transaction
		SalesData trans;
		// variable to hold data for the next transaction
		while(read(file, trans)) {
			// read the remaining transactions
			if (total.isbn() == trans.isbn())
				// check the isbns
				total.combine(trans); // update the running total
			else {
				print(std::cout, total) << std::endl; // print the results
				total = trans;
				// process the next book
			}
		}
		print(std::cout, total) << std::endl;
		// print the last transaction
	} else {
		// there was no input
		std::cerr << "No data?!" << std::endl;
		// notify the user
	}
}
