#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>
#include <time.h>
#include <vector>
#include <iterator>

#include "main.h"
#include "test.h"

void test_test() {
	std::cout << "xz" << std::endl;
	ASSERT_EQUAL(10, 5);
	ASSERT_EQUAL(10, 10);
}

int main() {
	RUN_TEST(test_test);

}
