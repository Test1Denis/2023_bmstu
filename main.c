#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>
#include <time.h>

//#include "infostudent.h"

struct Temp {
	int a;
	Temp();	//constructor - иначе конструктор - функция
	Temp(short);
	Temp(int);
	Temp(char);
};

Temp::Temp() {
	std::cout << "constructor is called - " << __func__ << std::endl;
}

Temp::Temp(int _a) {
	std::cout << "int constr" << std::endl;
	a = _a;
}
Temp::Temp(short _a) : a(_a) {
	std::cout << "short constr" << std::endl;
}
Temp::Temp(char _a) {
	std::cout << "char constr" << std::endl;
}


int main(int argc, char** argv) {

	{
		struct Temp a(10);
	}
	{
		struct Temp a((short)10);
	}
	{
		struct Temp a('a');
	}


//	struct Student group_rl6_21[25];

//	int countRed = countStudentByColor(&group_rl6_21[0], 25, 0x00FF0000);



	return 0;

}
