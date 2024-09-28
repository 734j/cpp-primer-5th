#include <iostream>

/*
 *
 * 7.40
 *
 *
 */

class Date {
public:
	Date() {
		epochtime = 11111111; // Just an example. This should "get" the current time.
	}
	Date(time_t i): epochtime(i) {}
	std::ostream& printepoch(std::ostream& pecout) {
		pecout << epochtime;
		return pecout;
	}
	time_t getepoch() { return epochtime; }
	std::string& getformatted() {
		formatted = "TEST"; // Just an example, we format the time here.
		return formatted;
	}
	
private:
	time_t epochtime;
	std::string formatted;
};

int main () {

	Date d1;
	Date d2(342342423);
	d1.printepoch(std::cout) << std::endl;
	d2.printepoch(std::cout) << std::endl;
	std::cout << d1.getepoch() << std::endl;
	std::cout << d1.getformatted() << std::endl;
	return 0;
}
