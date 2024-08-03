#include <iostream>
#include "sales_item.hpp"

/*
 *
 * decltype testing
 *
 *
 */

int main () {

	int i = 100;
	int &ii = i;
	int *iii = &i;

	decltype(i) dti = 101; //int
	decltype(ii) dtii = dti; //int&
	decltype(ii + 0) dtii2 = 102; //int
	decltype(*iii) dtiii = i; //int&
	decltype(*iii + 0) dtiii2 = i; //int
	decltype(iii) dtiii3 = &i; //int*
	std::cout << dti << " " // Will print 101
			  << dtii << " " // Will print 101
			  << dtii2 << " " // Will print 102
			  << dtiii << " " // Will print 100
			  << dtiii2 << " " // Will print 100
			  << dtiii3 << " " // Address if i
			  << &i << " " // address of i
			  << std::endl; 
	return 0;
}
