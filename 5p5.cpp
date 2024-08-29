#include <iostream>
#include <vector>

/*
 *
 * 5.5
 *
 *
 */

int main () {

	int TestScore = 0;
	std::vector<std::string> GradeLetters = {"F", "D", "C", "B", "A", "A++"};
	std::string FinalGrade;
	if(std::cin >> TestScore) {} else { return -1; }
	
	if(TestScore < 0 || TestScore > 100) { return -1; }

	if(TestScore < 60) {
		FinalGrade = GradeLetters[0];
	} else {
		if(TestScore != 100) {
			FinalGrade = GradeLetters[(TestScore-50) / 10];
			if((TestScore % 10) > 7) {
				FinalGrade += "+";
			} else if((TestScore % 10) < 3) {
				FinalGrade += "-";
			}
		} else {
			FinalGrade = GradeLetters[5];
		}
	}

	std::cout << "Your grade is: " << FinalGrade << std::endl;
	return 0;
}
