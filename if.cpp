#include <iostream>

int main () {

	int currVal = 0, val = 0, counter = 1;
	if(std::cin >> currVal) {
		while(std::cin >> val) {
			if (currVal == val) {	
				++counter;
			} else {
				std::cout << "You entered " << currVal << " " << counter << " times." << std::endl;
				currVal = val;
				counter = 1;
			}
		   
		}
		std::cout << "You entered " << currVal << " " << counter << " times." << std::endl;	
	}
	
	return 0;
}
