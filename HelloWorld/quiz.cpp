#include "io.h"
#include <iostream>

// 2.x quiz from learncpp.com
// includes io.cpp & io.h

int main() {

	// assign the variables with values

	std::cerr << "testt" << '\n';
	int x{ read_number() };
	int y{ read_number() };
	
	// cout the answer
	write_answer(x + y);

	return 0;
}