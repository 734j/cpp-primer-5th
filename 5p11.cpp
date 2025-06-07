#include <iostream>
#include <cstdint>

/*
 *
 * 5.11
 *
 *
 */

int main () {

	char Character = 0;
	uint32_t Va = 0;
	uint32_t Ve = 0;
	uint32_t Vi = 0;
	uint32_t Vo = 0;
	uint32_t Vu = 0;
	uint32_t BlankSpace = 0;
	uint32_t Tabs = 0;
	uint32_t Newlines = 0;
	uint32_t Other = 0;
	while(std::cin.get(Character)) {
		if(Character == 'a' || Character == 'A') {
			++Va;
		} else if (Character == 'e' || Character == 'E') {
			++Ve;
		} else if (Character == 'i' || Character == 'I') {
			++Vi;
		} else if (Character == 'o' || Character == 'O') {
			++Vo;
		} else if (Character == 'u' || Character == 'U') {
			++Vu;
		} else if (Character == '\n') {
			++Newlines;
		} else if (Character == '\t') {
			++Tabs;
		} else if (Character == ' ') {
			++BlankSpace;
		} else {
			++Other;
		}
	}

	std::cout << "A: " << Va << "\n"
			  << "E: " << Ve << "\n"
			  << "I: " << Vi << "\n"
			  << "O: " << Vo << "\n"
			  << "U: " << Vu << "\n"
			  << "Tabs: " << Tabs << "\n"
			  << "Newlines: " << Newlines << "\n"
			  << "Blank Space: " << BlankSpace << "\n"
			  << "Others: " << Other << std::endl;
	return 0;
}
