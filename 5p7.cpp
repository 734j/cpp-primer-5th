#include <iostream>

/*
 *
 * 5.7
 *
 *
 */

int get_value() {

	return 373;
}

int main () {

	int ival1 = 50;
	int ival2 = 100;
	int minval = 10;
	int occurs = 40;
	int ival = 50;
	if(ival1 != ival2)
		ival1 = ival2;
	else ival1 = ival2 = 0;

	if(ival < minval) {
		minval = ival;
		occurs = 1;
	}

	int ival3;
	if((ival3 = get_value()))
		std::cout << "ival = " << ival << std::endl;
	if(!ival3)
		std::cout << "ival = 0\n";

	if(ival == 0)
		ival = get_value();

	if(occurs) // stop compiler from complaining
		
	return 0;
}
