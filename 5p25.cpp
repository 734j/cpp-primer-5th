#include <iostream>
#include <stdexcept>

/*
 *
 * 5.23
 *
 *
 */

int main () {

	int a = 0;
	int b = 0;
	bool d = true;
	while(d) {
		d = false;
		try {
			std::cin >> a >> b;
			if(b == 0) {
				throw std::runtime_error("divide by 0!");
			}

			std::cout << a / b << std::endl;			
		} catch(std::runtime_error &err) {
			std::cout << err.what() << "\nTry again? Y/N " << std::endl;
			char c = 0;
			std::cin >> c;
			if(c == 'Y' || c == 'y') {
				d = true;
			}
		}

	}
	
	return 0;
}
