#include <iostream>
#include <fstream>
#include "sales_data.hpp"

/*
 *
 * 8.7
 *
 *
 */

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
		std::cerr << "This file has data" << std::endl;
		return -1;
	}

	out_file_chk.close(); 
	std::ofstream out_file(argv[2]); // Finally open for writing
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
