#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"
/*
 *
 * Pretty much same as last iterator test
 * Still a bit confused about this stuff.
 * Especially the fact that you cant add two iterators
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;
int main () {

	
	vector<int> vec = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	auto it1 = vec.begin(); // points at 10 in the vector
	it1 += 9; // we go 9 places forwards - 20 - 30 - 40 - 50 - 60 - 70 - 80 - 90 - 100.
	// it1 now points to 100
	cout << *it1 << endl;
	auto it2 = vec.begin();
	auto diff = it1 - it2;
	auto it3 = vec.begin();
	it3 += diff;
	cout << diff << " < diff" << endl;
	cout << *it3 << endl;
	return 0;
}
