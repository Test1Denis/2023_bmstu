#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>
#include <time.h>
#include <vector>
#include <iterator>

#include "infostudent.h"

struct Temp {
	int a;
	Temp(int _a) {
		std::cout << __func__ << " " << a << std::endl;
		a = _a;
	}
	~Temp() {
		std::cout << __func__ << std::endl;
	}
	
};


int main(int argc, char** argv) {
	std::vector<Temp> vecTemp;
	Temp *t1 = new Temp(10);

	for (int i = 0; i < 5; i++)
		vecTemp.push_back(*t1);
//	vecTemp.emplacef(t1);

	auto iter = vecTemp.begin();
	while (iter != vecTemp.end()) {

	}
	for (std::vector<Temp>::iterator iter = vecTemp.begin(); iter != vecTemp.end(); iter++) {
		std::cout << iter->a << std::endl;	
		std::cout << (*iter).a << std::endl;
		
	}

	return 0;
}
