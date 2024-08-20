#include <iostream>
#include <limits>

/*
 *
 * 
 *
 *
 */

void cin_clear() {

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main () {

	unsigned long Quiz1 = 0;
	unsigned long Student = 0;
	unsigned long Pass = 0;
	const int maxval = 31;
	std::string choice;
	while(1) {

		if(std::cin.eof()) {
			std::cout << "Exiting..." << std::endl;			
			return -1;
		}
		
		std::cout << "Would you like to 'add' a new student's result or 'print' out the total results?" << std::endl;
		if(std::cin >> choice) {} else {
			cin_clear();
			continue;
		}
		
		if(choice == "add") {
			std::cout << "Which student out of 30?" << std::endl;
			if(std::cin >> Student) {} else {
				cin_clear();
				continue;
			}

			if(Student >= maxval || Student < 1) {
				continue;
			}
			
			std::cout << "Did this student pass? (0 == fail) (1 == pass)" << std::endl;
			if(std::cin >> Pass) {} else {
				cin_clear();
				continue;
			}
			
			if(Pass) {
				Quiz1 |= 1UL << Student;
			}
			
			if(!Pass) {
				Quiz1 &= ~(1UL << Student);
			}
			
			std::cout << "Added result for student #" << Student
					  << ((Quiz1 & (1UL << Student)) ? ": passed" : ": failed") << std::endl;
		}

		if(choice == "print") {
			for(int i = 1 ; i != maxval ; ++i) {
				std::cout << "Student #" << i << " " << ((Quiz1 & (1UL << i)) ? "passed" : "failed") << std::endl;
			}
		}
	}
	
	return 0;
}
