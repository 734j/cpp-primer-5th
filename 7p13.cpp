#include <iostream>
#include "sales_data.hpp"

/*
 *
 * 7.13
 *
 *
 */

int main () {

	SalesData total(std::cin);
	if (std::cin) {
		SalesData trans(std::cin);
		while(std::cin) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(std::cout, total) << std::endl;
				total = trans;
			}

			read(std::cin, trans);
		}
		
		print(std::cout, total) << std::endl;
	} else {
		std::cerr << "Error" << std::endl;
		return -1;
	}
	
	return 0;
}
