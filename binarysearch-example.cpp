#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * Binary search program from the book, added some
 * extra stuff to make the program a little bit more
 * complete. Also added some brackets to follow my preffered style.
 * Maybe it would have been nice to make a randomly generated sorted
 * vector but whatever this example is good enough...
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

	vector<int> in = {1, 4, 23, 35, 36, 111, 122, 135, 239, 345, 365, 399, 401, 477, 480, 592, 728, 777, 824, 928, 983, 1002, 1023, 1209};
	int sought = 0;
	for(auto vt : in) {
		cout << vt << " ";
	}
	
	cout << endl;
	if(cin >> sought) {		
	} else {
		return -1;
	}
		
	auto beg = in.begin(), end = in.end();
	auto mid = in.begin() + (end - beg)/2;
	while (mid != end && *mid != sought) {
		if (sought < *mid) {
			end = mid;
		} else {
			beg = mid + 1;
		}
		
		mid = beg + (end - beg)/2; // new midpoint
	}

	if(mid != end) {
		cout << "found: " << *mid << endl;
	} else {
		cout << "could not find: " << sought << endl;
	}
	
	return 0;
}
