#include <iostream>
#include <cstdint>

/*
 *
 * 5.14
 *
 * The program does not handle cases where words repeat for
 * the same amount of times. So for example if we input
 * "hello hello hi hi" only hello would print as the top word
 */

int main () {

	std::string NewWord;
	std::string TempWord;
	std::string MostOccuring;
	uint32_t TmpCount = 0;
	uint32_t TopCount = 0;
	while(std::cin >> NewWord) {
		if(TempWord != NewWord) {			
			if(TmpCount > TopCount) {
				TopCount = TmpCount;
				MostOccuring = TempWord;				
			}

			TempWord = NewWord;
			TmpCount = 1;
		} else if(TempWord == NewWord) {
			++TmpCount;
			if(TmpCount > TopCount) {
				TopCount = TmpCount;
				MostOccuring = TempWord;
			}
		}
	}

	
	if(TopCount > 1) {
		std::cout << MostOccuring << " is the top word occuring " << TopCount << " times." << std::endl;
	} else {
		std::cout << "No words were repeated!" << std::endl;
	}
	
	return 0;
}
