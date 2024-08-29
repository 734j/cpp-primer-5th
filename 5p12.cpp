#include <iostream>

/*
 *
 * 5.12
 *
 *
 */

/*
 The solution for this exercise is pretty ugly i will admit.
 One other thing to note here is that the exercise can be
 interpreted in various different ways. Should it count all
 occurances of fl, ff, fi in one counter? Or should they all
 have their own counters? I went with the first one but this
 could just as well be the latter interpretation. I actually
 thought this would be easy going in to it but i struggled
 with bugs where i input strings like "fafafafa". Because it
 would still count because whenever it encounters characters
 that aren't f, i, l it does not reset the factive variable
 so i added factive = false; to all the if statement blocks.

 Again, not pretty but it did the job.
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
