#include <iostream>
#include <vector>

/*
 *
 * 7.58
 *
 *
 */

class Example {
public:
	static double rate; // Cannot be initialized here
	static const int vecSize = 20;
	static std::vector<double> vec; // Cannot be initialized here
};

// We initialize them here instead
double Example::rate = 20;
std::vector<double> Example::vec(vecSize);
int main () {
	
	/*
	  // example.h
	  class Example {
	  public:
	  static double rate = 6.5;
	  static const int vecSize = 20;
	  static vector<double> vec(vecSize);
	  };
	  
	  // example.C
	  #include "example.h"
	  double Example::rate;
	  vector<double> Example::vec;
	 */
	return 0;
}
