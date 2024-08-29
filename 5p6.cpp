#include <iostream>
#include <vector>

/*
 *
 * 5.6
 *
 * I had no idea we were only making the simple
 * version of this program in the previous exercise
 */

int main () {

	int TestScore = 0;
	std::vector<std::string> GradeLetters = {"F", "D", "C", "B", "A", "A++"};
	std::string FinalGrade;
	if(std::cin >> TestScore) {} else { return -1; }
	
	if(TestScore < 0 || TestScore > 100) { return -1; }

	(TestScore < 60) ? FinalGrade = GradeLetters[0] : FinalGrade = GradeLetters[(TestScore - 50) / 10];
	std::cout << "Your grade is: " << FinalGrade << std::endl;
	return 0;
}
