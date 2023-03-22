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

struct Node {
	static int count;
	Node() {
		count++;
	}
	~Node() {
		count--;
	}
};

int Node::count = 0;


int main(int argc, char** argv) {

	std::cout << ++Node::count << std::endl;

	Node tempNode[10];
	for (int i = 0; i < 10; i++) {
		std::cout << tempNode[i].count << std::endl;
	}

	return 0;
}
