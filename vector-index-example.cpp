#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * Description
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

	vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade/10]; 
			// scores[grade/10] += 1; // basically equivalent
		}
	}
	
	return 0;
}
