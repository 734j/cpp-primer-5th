#include <iostream>
#include <vector>

/*
 *
 * 3.12
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

    vector<vector<int>> ivec; // A vector of vectors of int
	//vector<string> svec = ivec; // Not valid, you can not initialize a vector of strings to with a vector of int.
	vector<string> svec(10, "null"); // A vector of 10 objects of type string all initialized to "null"
	
	return 0;
}
