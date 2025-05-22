#include <iostream>
#include <string>

/*
 *
 * 9.49
 *
 *
 */

unsigned long find_word_non_ascender_descender(std::string word) {

	std::string asc_desc = "qyijpdfghjlbtk";
	auto a = word.find_first_of(asc_desc);
	return a;
}

int main () {

	std::string word;
	std::string longest_word;
	while(std::cin >> word) {
		if(find_word_non_ascender_descender(word) != std::string::npos) {
			continue;
		}

		if(word.size() > longest_word.size()) {
			longest_word = word;
		}
		
	}

	std::cout << "longest non ascender/descender word: " << longest_word << std::endl;
	return 0;
}
