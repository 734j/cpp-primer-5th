#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.16
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

    vector<int> v1; // 0 elements?
	vector<int> v2(10); // 10 elements, default initialized
	vector<int> v3(10, 42); // 10 elements, all initialized to 42
	vector<int> v4{10}; // 1 element, initialized to 10.
	vector<int> v5{10, 42}; // 2 elements, first one 10, second one 42
	vector<string> v6{10}; // Not really valid but it creates 10 elements of default initialized strings. Empty strings.
	vector<string> v7{10, "hi"}; // Not really valid but creates 10 elements that says "hi"

	cout << v1.size() << " <v1 size" << endl;
	for(auto v1i : v1) { cout << "'" << v1i << "'"; }
	cout << " <v1 contents" << endl;
	
	cout << v2.size() << " <v2 size" << endl;
	for(auto v2i : v2) { cout << "'" << v2i << "'"; }
	cout << " <v2 contents" << endl;

	cout << v3.size() << " <v3 size" << endl;
	for(auto v3i : v3) { cout << "'" << v3i << "'"; }
	cout << " <v3 contents" << endl;

	cout << v4.size() << " <v4 size" << endl;
	for(auto v4i : v4) { cout << "'" << v4i << "'"; }
	cout << " <v4 contents" << endl;

	cout << v5.size() << " <v5 size" << endl;
	for(auto v5i : v5) { cout << "'" << v5i << "'"; }
	cout << " <v5 contents" << endl;

	cout << v6.size() << " <v6 size" << endl;
	for(auto v6i : v6) { cout << "'" << v6i << "'"; }
	cout << " <v6 contents" << endl;

	cout << v7.size() << " <v7 size" << endl;
	for(auto v7i : v7) { cout << "'" << v7i << "'"; }
	cout << " <v7 contents" << endl;

	// some extra testing below
	//vector<string> v8(10); // same as v6?
	//vector<string> v9(10, "hi"); // Same as v7?
	//cout << v7[1] << endl;
	//cout << v9[1] << endl;

	return 0;
}
