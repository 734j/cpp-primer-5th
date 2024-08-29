#include <iostream>

/*
 *
 * 5.9
 *
 *
 */

int main () {

	char Character = 0;
	int Va = 0;
	int Ve = 0;
	int Vi = 0;
	int Vo = 0;
	int Vu = 0;
	int NonVowel = 0;
	while(std::cin >> Character) {
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
		} else {
			++NonVowel;
		}
	}

	std::cout << "A: " << Va << "\n"
			  << "E: " << Ve << "\n"
			  << "I: " << Vi << "\n"
			  << "O: " << Vo << "\n"
			  << "U: " << Vu << "\n"
			  << "Non Vowel: " << NonVowel << std::endl;
	return 0;
}
