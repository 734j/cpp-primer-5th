#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 
 *
 *
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;
int main () {

	constexpr int isz = 10;
	int fff[isz];
	fff[0] = 304234;
	cout << fff[0] << endl;

	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int (*arr_p)[10] = &arr;
	cout << &(*arr_p)[2] << " " << &arr[2] << endl;
	// This syntax is crazy!
	return 0;
}
