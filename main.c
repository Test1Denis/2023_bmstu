#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>
#include <time.h>

#include "infostudent.h"

struct Temp {
	Temp() {
		std::cout << __func__ << std::endl;
	}
	~Temp() {
		std::cout << __func__ << std::endl;
	}
	
};


int main(int argc, char** argv) {

	struct Temp t1;

	struct Temp* t;

	std::cout << __LINE__ + 1<< " : ";
	t = new struct Temp();

	std::cout << __LINE__  + 1 << " : ";
	delete t;
	std::cout << __LINE__ + 1 << " : ";
	return 0;


	const int countStudent = 10;
	struct Student group_rl6_21[countStudent];


	for (int i = 0; i < countStudent; i++) {
		std::cout << std::dec << i << " - " 
			<< group_rl6_21[i].averMark << " " 
			<< std::hex << group_rl6_21[i].colorEyes 
			<< std::endl;
	}
//	int countRed = countStudentByColor(&group_rl6_21[0], 25, 0x00FF0000);



	return 0;

}
