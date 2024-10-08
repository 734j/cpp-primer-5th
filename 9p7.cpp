#include <iostream>
#include <vector>

/*
 *
 * 9.7
 *
 *
 */

int main () {
	std::vector<int> a(10,10);
	auto i = a.size(); // It's a std::vector<int>::size_type
	if(i)
	return 0;
}
