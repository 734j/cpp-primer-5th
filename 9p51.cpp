#include <iostream>
#include <string>
#include <vector>

/*
 *
 * 9.51
 *
 *
 */

class DateFormat {

public:
	DateFormat(const std::string &date) {
		void (*Identified)(const std::string &date) = IdentifyDateFormat(date);
		Identified(date);
	}
	
private:
	//uint64_t year;
	//uint64_t month;
	//uint64_t day;
	const std::vector<std::string> months_lc{"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
	const std::vector<std::string> months_uc{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	const std::vector<std::string> months_short_lc{"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
	const std::vector<std::string> months_short_uc{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	const std::string numerical_characters{"0123456789"};
	
	static void UCMonthDayCommaYear(const std::string &date) {
		std::cout << date << std::endl;
	}

	static void DaySlashMonthSlashYearNumbers(const std::string &date) {
		std::cout << date << std::endl;
	}

	static void ShortUCMonthDayCommaYear(const std::string &date) {
		std::cout << date << std::endl;
	}

	void (*IdentifyDateFormat(const std::string &date))(const std::string&) {

		// January 1, 1900
		for(const auto &a : months_uc) {
			if(date.find(a) != std::string::npos) {
				std::cout << "Format: (January 1, 1900)" << std::endl;
				return UCMonthDayCommaYear;
			}
		}

		// Jan 1, 1900
		for(const auto &a : months_short_uc) {
			if(date.find(a) != std::string::npos) {
				std::cout << "Format: (Jan 1, 1900)" << std::endl;
				return ShortUCMonthDayCommaYear;
			}
		}		
		
		// 1/1/1900
		int count{0};
		std::string::size_type pos{0};
		while(1) { // Bug: If the date is wrong, then it loops forever
			if((pos = date.find_first_of('/', pos)) != std::string::npos) {
				++count;
				++pos;
			}

			
		}

		if(count == 2) {
			std::cout << "Format: (1/1/1900)" << std::endl;
			return DaySlashMonthSlashYearNumbers;
		}

		std::cout << "Format: (None Found. Return null.)" << std::endl;
		return nullptr;
	}
};

int main () {

	DateFormat test("1/1/1900");
	return 0;
}
