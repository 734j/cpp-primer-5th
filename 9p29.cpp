#include <iostream>
#include <vector>

/*
 *
 * 9.29
 *
 *
 */

int main () {

	// vec.size() == 25
	// vec.resize(100); would add 75 elements (vec.size() == 100)
	// vec.resize(10); would remove 15 elements (vec.size() == 10)
	std::vector<int> vec1(25, 0);
	std::vector<int> vec2(25, 0);
	std::cout << "(vec1) Original size: " << vec1.size() << std::endl;
	vec1.resize(100);
	std::cout << "(vec1) After resize(100): " << vec1.size() << std::endl;
	std::cout << "------------------------------" << std::endl; 
	std::cout << "(vec2) Original size: " << vec2.size() << std::endl;
	vec2.resize(10);
	std::cout << "(vec2) After resize(10): " << vec2.size() << std::endl;
	return 0;
}
