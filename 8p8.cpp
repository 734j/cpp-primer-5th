#include <iostream>
#include <fstream>
#include "sales_data.hpp"

/*
 *
 * 8.8
 *
 *
 * Yes, i stole this function from one of my other projects to be used here.
 * I think it works really well here.
 */

int choice (const int mode) {
	
	int FUNCTION_FAILURE = -1;
	int MODE_NORMAL = 0;
	int MODE_YES = 1;
	int MODE_NO = 2;
	int MODE_FORCE = 3;
    char choice;
    char modechoice;
    do {
		if (mode == MODE_NORMAL) { fputs("[Y / N] ? ", stdout); }
		if (mode == MODE_YES) { fputs("[Y / n] ? ", stdout); }
		if (mode == MODE_NO) { fputs("[y / N] ? ", stdout); }
		if (mode == MODE_FORCE) { return 0; }
	
		choice = getchar();
		if (choice == '\n' && mode == MODE_YES) { modechoice = 'Y'; choice = modechoice; goto modeskip;}
		if (choice == '\n' && mode == MODE_NO) { modechoice = 'N'; choice = modechoice; goto modeskip;}
		if (choice == '\n' && mode == MODE_NORMAL) { continue; }
		while ('\n' != getchar());

    } while ( (choice != 'Y') && (choice != 'y') && (choice != 'N') && (choice != 'n') );

    modeskip:
    if ((choice == 'Y') || (choice == 'y')) {
        return 0;
    }

    if ((choice == 'N') || (choice == 'n')) {
        return 1;
    }

    return FUNCTION_FAILURE; // Should never happen
}

int main (int argc, char **argv) {

	if(argc < 3 || argc > 4) {
		return -1;
	}
	
	std::ifstream file(argv[1]); // open first file to read
	std::ifstream out_file_chk(argv[2], std::ifstream::ate); // Open 2nd file to check if it exists
	if(!out_file_chk.is_open()) { // If it does not exist create it
		std::cout << "File created." << std::endl;
		std::ofstream create_file(argv[2]);
		if(create_file.fail()) { return -1; }
		create_file.close();
	}
	
	if(file.fail()) { // check if first file failed to open
		return -1;
	}

	if(out_file_chk.tellg() > 0) { // Check if the 2nd file had any data
		std::cerr << "This file has data. Do you want to append to it?" << std::endl;
		int res = choice(0);
		if(res == 1) {
			return -1;
		}
	}

	out_file_chk.close(); 
	std::ofstream out_file(argv[2], std::ofstream::app); // Finally open for writing
	SalesData total;
	if (read(file, total)) {
		SalesData trans;
		while(read(file, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(out_file, total) << std::endl;
				total = trans;
			}
		}
		print(out_file, total) << std::endl;
	} else {
		std::cerr << "No data?!" << std::endl;
	}
}
