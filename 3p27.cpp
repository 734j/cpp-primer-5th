#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.27
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

int text_size() {

	return 9900;
}

int main () {

	//unsigned buf_size = 1024;
	//int ia1[buf_size]; // illegal
	int ia2[4 * 7 - 14]; // legal
	//int ia3[text_size()]; // illegal, would be legal if text_size returned constexpr
	//char st[11] = "fundamental"; // illegal

	ia2[0] = 1;
	cout << ia2[0] << endl;
	return 0;
}
