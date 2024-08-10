#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * Just a little test, had to clear something up in my head
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

	vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	auto iter = nums.begin();
	iter += 10;
	cout << "nums content: " << *iter << endl;
	cout << "subscr content: " << nums[10] << endl;;
	return 0;
}
