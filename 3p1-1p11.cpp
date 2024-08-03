#include <iostream>
#include "sales_item.hpp"

/*
 *
 * 3.1, 1.11
 *
 *
 */

using std::cout;
using std::cin;
using std::endl;
int main () {

	int First = 0;
	int Second = 0;
	cin >> First >> Second;
	cout << endl;
	First++;
	while(First < Second) {
		cout << First << endl;
		First++;
	}

	return 0;
}
