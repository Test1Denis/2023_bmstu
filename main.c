#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>
#include <time.h>

void randFill(int* ar, int size, int min = 0, int max = 100) {
	srand(time(nullptr));
	if (min > max) {
		max += min;
	}

	while((size--) > 0) {
		ar[size-1] = min + (rand() - min) % max;
	}
}

void test_randFill() {
	std::cout << __func__ << std::endl;
	{
		int *ar = new int [10];
		randFill(ar, 10);
		int temp = 10;
	}
	{
		int *ar = new int [10];
		randFill(ar, 10, 100, 150);
		int temp = 10;
	}
}

int main(int argc, char** argv) {
	test_randFill();	
	return 0;

}
