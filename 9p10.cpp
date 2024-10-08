#include <iostream>
#include <vector>

/*
 *
 * 9.10
 *
 *
 */

int main () {

	std::vector<int> v1;
	const std::vector<int> v2;
	std::vector<int>::iterator it1 = v1.begin(); // std::vector<int>::iterator
	std::vector<int>::const_iterator it2 = v2.begin(); // std::vector<int>::const_iterator
	std::vector<int>::const_iterator it3 = v1.cbegin(); // std::vector<int>::const_iterator
	std::vector<int>::const_iterator it4 = v2.cbegin(); // std::vector<int>::const_iterator
	if(*it1 || *it2 || *it3 || *it4)
	return 0;
}
