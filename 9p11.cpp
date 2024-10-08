#include <iostream>
#include <vector>

/*
 *
 * 9.11
 *
 *
 */

int main () {

	std::vector<int> v1; // empty
	std::vector<int> v2(v1); // empty
	std::vector<int> v3 = v1; // empty
	std::vector<int> v4(1); // 1 element, default initialized
	std::vector<int> v5(10,1); // 10 elements, initialized to 1
	std::vector<int> v6{10,10,1}; // 3 elements, values 10, 10, 1
	std::vector<int> v7 = {10, 10, 1}; // 3 elements, values 10, 10, 1
	std::vector<int> v8(v5.begin(), v5.end()); // Same as v5
	return 0;
}
