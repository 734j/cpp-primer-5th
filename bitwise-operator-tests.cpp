#include <iostream>
#include <limits>

/*

Awfully long comment here, but i did this to visualize what's happening and make it easier to understand
  
-------------------------------------------------------------------------------------------------------------------------

00000000 00000000 00000000 00000000 (uint32_t Quiz1)
00000000 00000000 00000000 00000001 (1UL)
<< 27
00001000 00000000 00000000 00000000 (1UL << 27(Student))

passed: Quiz1 OR (1UL << 27)
00000000 00000000 00000000 00000000 (Quiz1)
00001000 00000000 00000000 00000000 (1UL << 27)
if ther is a 1 on either of the two sides then add the bit              (1 -- 1 = 1) (1 -- 0 = 1) (0 -- 0 = 0)
result of Quiz1 OR (1UL << 27):
00001000 00000000 00000000 00000000

-------------------------------------------------------------------------------------------------------------------------

but what if the student failed? (from the start)
failed: Quiz1 AND NOT(1UL << 27)
00000000 00000000 00000000 00000000 (Quiz1)
11110111 11111111 11111111 11111111 NOT(1UL << 27)
if there is a 1 on both sides then keep it at 1. Otherwise set it at 0. (1 -- 1 = 1) (1 -- 0 = 0) (0 -- 0 = 0) 
result of Quiz1 AND NOT(1UL << 27):
00000000 00000000 00000000 00000000

-------------------------------------------------------------------------------------------------------------------------

but what if we set the student to passed but then realise they failed?
failed: Quiz1 AND NOT(1UL << 27)
00001000 00000000 00000000 00000000 (Quiz1)
11110111 11111111 11111111 11111111 NOT(1UL << 27)
                                                                        (1 -- 1 = 1) (1 -- 0 = 0) (0 -- 0 = 0) 
result of Quiz1 AND NOT(1UL << 27):
00000000 00000000 00000000 00000000

-------------------------------------------------------------------------------------------------------------------------

okay but what if we have several students that pass and we need to change one to failed?
failed: Quiz1 AND NOT(1UL << 27)
00001000 01100000 00010000 11100000 (Quiz1)
11110111 11111111 11111111 11111111 NOT(1UL << 27)
                                                                        (1 -- 1 = 1) (1 -- 0 = 0) (0 -- 0 = 0)
result of Quiz1 AND NOT(1UL << 27):
00000000 01100000 00010000 11100000

-------------------------------------------------------------------------------------------------------------------------
*/

void cin_clear() {

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main () {
	
	uint32_t Quiz1 = 0;
	uint32_t Student = 0;
	uint32_t Pass = 0;
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
