#include <iostream>
#include <vector>

/*
 *
 * 9.34
 *
 *
 */

int main () {
	
	// Prediction: The program will get stuck on the first odd value and keep inserting it indefinitely
	std::vector<int> vi = {1,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) { // when it's odd
			iter = vi.insert(iter, *iter); // insert copy of *iter before iter, return iterator to inserted value
			std::cout << "inserted value: " << *iter << "\n";
		}
		
		++iter; // go one step forwards
	}
	
	return 0;
}
