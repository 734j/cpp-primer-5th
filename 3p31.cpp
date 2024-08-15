#include <iostream>
#include <vector>

/*
 *
 * 3.31
 *
 * I mean this was really easy because i just remembered what
 * i'd already seen in the last exercise...
 * I made one more like the one in the book and one that's
 * a little bit more simpler. Not sure how 'correct' the simpler
 * version is. Who knows...
 */

int main () {

	constexpr size_t ArraySize = 10;
	int MyArray[ArraySize];
	for(size_t Index = 0 ; Index != ArraySize ; ++Index) {
		MyArray[Index] = Index;
	}

	int MyArray2[10];
	for(int Index = 0 ; Index != 10 ; ++Index) {
		MyArray2[Index] = Index;
	}

	for(auto i : MyArray) {
		std::cout << i << std::endl;
	}

	std::cout << std::endl;
	for(auto i : MyArray2) {
		std::cout << i << std::endl;
	}
	
	return 0;
}
