#include <iostream>

/*
 *
 * 4.22
 *
 *
 */

void cond_op_grade() {

	std::string finalgrade;
	unsigned int grade = 0;
	if(std::cin >> grade) {
		if(grade > 100) { return; }
		
	} else {
		return;
	}
	
	finalgrade = (grade >= 90) ? "high pass" : (grade >= 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
	std::cout << finalgrade << std::endl;
}

void if_grade() {

	std::string finalgrade;
	unsigned int grade = 0;
	if(std::cin >> grade) {
		if(grade > 100) { return; }
		
	} else {
		return;
	}

	if(grade >= 90) {
		finalgrade = "high pass";
	} else if(grade >= 75) {
		finalgrade = "pass";
	} else if(grade >= 60) {
		finalgrade = "low pass";
	} else {
		finalgrade = "fail";
	}
	
	std::cout << finalgrade << std::endl;
}

int main () {

	/*
	  Not really sure which of these is the 'better' alternative
	  i do like how conditional operator is very terse and can
	  do the same thing in a very small line. But it could also
	  be a bit more difficult to read and understand. It could
	  simply be a skill issue whether it's hard to read or not
	  but i am not really sure.

	  I do think the if statement is a bit easier to read because
	  it is simply just so common and widely used that you really
	  just default to it. I know that all operators and if
	  statements have their best moments to be used but i can't
	  really judge which one would be best for this case.

	  I guess the best use for the the conditional operator
	  is best when we want to do a simple if statement where there
	  are just two simple outcomes
	 */
	
	cond_op_grade();
	if_grade();
	return 0;
}
