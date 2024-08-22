#include <iostream>

/*
 *
 * 4.34
 *
 *
 */

bool           flag;
short          sval;
int            ival;
long           lval;
float          fval;
char           cval;
unsigned short usval;
unsigned int   uival;
unsigned long  ulval;
double         dval;
int main () {

	if (fval) {
		// Converted to bool
	}
	
	dval = fval + ival; // ival converted to float, then both converted to double
	if(dval + ival * cval) { // cval converted to intm ival and cval converted to double

	}
	
	return 0;
}
