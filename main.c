#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>
#include <time.h>
#include <vector>
#include <iterator>

#include "main.h"

#define B1
#undef	B1

#define TEST

#undef TEST
#ifdef TEST 
	flsjdlfjsa;lfjsalfj
#endif


void foo1(class Abase, const std::string& nameA) {
	std::cout << nameA << std::endl;
}


void foo(int n, const std::string& nameN) {
	std::cout << n << " " << nameN << std::endl;
}

#define B_test	A(100)
int main(int argc, char** argv) {
#ifdef RL6_21_2023
	std::cout << "------------------\n";
	std::cout << "start project" << std::endl;
	std::cout << "------------------\n";
#elif RL6_29_2023
	std::cout << "defined RL6_29_2023" << std::endl;
#else 
	std::cout << "not defined RL6_21_2023" << std::endl;
#endif


	class Abase test;
	A1(test);
	int temp1jlkldjflj = 543;
	A(temp1jlkldjflj);
	B_test;

	return 0;
}
