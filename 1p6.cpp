#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 1.6 example
 *
 *
 */

int main () {

	Sales_item Total;
	Sales_item Trans;
	if(std::cin >> Total) {
		while(std::cin >> Trans) {
			if(Trans.isbn() == Total.isbn()) {
				Total += Trans;
			} else {
				std::cout << Total << std::endl;
				Total = Trans;
			}
		}
		
		std::cout << Total << std::endl;
	} else {
		std::cerr << "Error" << std::endl;
		return -1;
	}
	
	return 0;
}
