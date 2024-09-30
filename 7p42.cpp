#include <iostream>

/*
 *
 * 7.40
 *
 *
 */

class Date {
public:
	Date(time_t et, time_t et_c): epochtime(et), epochcompare(et_c) {}
	Date(): Date(0, 0) { std::cout << "delegated\n"; }
	Date(time_t et): Date(et, 0) { std::cout << "delegated\n"; }
	std::ostream& printepoch(std::ostream& pecout) {
		pecout << epochtime;
		return pecout;
	}
	time_t getepoch() { return epochtime; }
	time_t getcompare() { return epochcompare; }
	std::string& getformatted() {
		formatted = "TEST"; // Just an example, we format the time here.
		return formatted;
	}
	
private:
	time_t epochtime;
	time_t epochcompare;
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
