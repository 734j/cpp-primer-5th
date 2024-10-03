#include <iostream>
#include "class-tests.hpp"

/*
 *
 * 
 *
 *
 */

int main () {

	CLASS_TESTS a;
	a.Get_System_Info();
	a.print_CT();
	if(a.isFailed()) {
		std::cout << "Fail." << std::endl;
		return 1;
	}
	
	if(a.isSuccess()) {
		std::cout << "Success!" << std::endl;
	}
	
	return 0;
}
