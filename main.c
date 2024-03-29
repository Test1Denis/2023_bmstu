#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>
#include <time.h>
#include <vector>
#include <iterator>

#include "main.h"
#include "test.h"
#include "filo.h"

extern int currentTest;


int getMax(int a, int b) {
	return a > b ? a : b;
}

template<class T>
void test(class IData<T>& temp) {

	temp.addToEnd(10);
}

void test_test() {
	std::cout << "xz" << std::endl;
	ASSERT_EQUAL(10, 5);
	ASSERT_EQUAL(10, 10);
	ASSERT_EQUAL(getMax(10,20), 20);
}



int main() {
	RUN_TEST(test_test);

	Filo<int> tempFilo;

	tempFilo.addToEnd(10);
	test(tempFilo);


}
