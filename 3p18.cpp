#include <iostream>
#include <vector>

/*
 *
 * 3.18
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

    vector<int> ivec1;
	vector<int> ivec2(10); // We could initialize it with some elements
	vector<int> ivec3{42}; // We could initialize it with the first element being 42	
	ivec1.push_back(42); // One way we might fix it
	ivec2[0] = 42;
	cout << ivec1[0] << " " << ivec2[0] << " " << ivec3[0] << endl;
	return 0;
}
