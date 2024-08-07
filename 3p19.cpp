#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.19
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

    vector<int> ivec1(10, 42);
	vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	vector<int> ivec3;
	for(decltype(ivec3.size()) i = 0 ; i < 10 ; i++) {
		ivec3.push_back(42);
	}
	
	vector<vector<int>> vecivec = {ivec1, ivec2, ivec3};
	for(auto &vv : vecivec) {
		for(auto &iv : vv) {
			cout << iv << " ";
		}
		cout << endl;
	}
	
	return 0;
}
