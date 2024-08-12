#include <iostream>
#include <vector>
#include <iterator>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 
 *
 *
 */

int main () {

	constexpr int isz = 10;
	int fff[isz];
	fff[0] = 304234;
	std::cout << fff[0] << std::endl;

	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int (*arr_p)[10] = &arr;
	std::cout << &(*arr_p)[2] << " " << &arr[2] << std::endl;
	// This syntax is crazy!

	int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *pia = ia;
	int *pia2 = &ia[0];
	auto apia = ia;
	apia[9] = 100;
	std::cout << pia << " "
			  << pia2 << " "
			  << apia << " "
			  << apia[9] << " "
			  << std::endl;
	
	int ar[] = {0,1,2,3,4,5,6,7,8,9};
	int *pbegin = ar;
	int *pend = ar + 10;
	for( ; pbegin != pend ; ++pbegin) { // Wow look! I've basically made my own iterators!
		std::cout << *pbegin << ".";
	}
	
	std::cout << std::endl;
	for(auto a : ar) {
		std::cout << a << ",";
	}
	
	std::cout << std::endl;
	signed long long int arre[] = {4,547,2365,35,65,2456,244,78,5,33354,0,111,122432,253,32323,-13432,-233333333};
	auto p_beg = std::begin(arre);
	auto p_end = std::end(arre);
	for( ; p_beg != p_end ; ++p_beg) {
		*p_beg *= 2;
	}

	for(auto p : arre) {
		std::cout << p << " ";
	}
	
	std::cout << std::endl;

	int hhh[] = {1,344,224,465333,553,24,12,234,243,2};
	int hhhh = *(hhh + 4);
	int h4 = *hhh + 10; // 11
	std::cout << hhhh << " " << h4 << std::endl;
	return 0;
}
