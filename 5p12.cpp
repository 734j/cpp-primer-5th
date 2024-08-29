#include <iostream>

/*
 *
 * 5.12
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
	uint32_t ffflfi = 0;
	bool factive = false;
	while(std::cin.get(Character)) {
		if(Character == 'a' || Character == 'A') {
			++Va;
			factive = false;
		} else if (Character == 'e' || Character == 'E') {
			++Ve;
			factive = false;
		} else if (Character == 'i' || Character == 'I') {
			if(factive) {
				++ffflfi;
				factive = false;
			}
			
			++Vi;
		} else if (Character == 'o' || Character == 'O') {
			++Vo;
			factive = false;
		} else if (Character == 'u' || Character == 'U') {
			++Vu;
			factive = false;
		} else if (Character == 'f') {
			if(factive) {
				++ffflfi;
				factive = false;
				continue;
			}
			
			factive = true;
		} else if (Character == 'l') {
			if(factive) {
				++ffflfi;
				factive = false;
			}
			
		} else if (Character == '\n') {
			++Newlines;
			factive = false;
		} else if (Character == '\t') {
			++Tabs;
			factive = false;
		} else if (Character == ' ') {
			++BlankSpace;
			factive = false;
		} else {
			++Other;
			factive = false;
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
			  << "ffflfi: " << ffflfi << "\n"
			  << "Others: " << Other << std::endl;
	return 0;
}
