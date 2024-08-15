#include <iostream>
#include <vector>

/*
 *
 * 3.13
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

	// some extra testing below
	vector<string> v8(10); // same as v6?
	vector<string> v9(10, "hi"); // Same as v7?

	cout << v7[1] << endl;
	cout << v9[1] << endl;
	return 0;
}
