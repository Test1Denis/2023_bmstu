#include <iostream>
#include <bitset>
#include <cstring>

int getMax(int* ar, int size) {
	int max = 0;
	int i = 1;

	while (i < size) {
		if (ar[max] < ar[i]) {
			max = i;
		}
		i++;
	}

	return max;

}

void test_getMax() {
	{	//test 1
		int ar[] = {4,6,2,9,10,54,9,0xaa,12};
		int maxInd = getMax(ar, 9);
		if (ar[7] != ar[maxInd]) {
			std::cout << "test 1 is BAD" << std::endl;
		}
	}
	{	//test 1
		int ar[] = {4,4,4,4,10,4,9,0,12};
		int maxInd = getMax(ar, 9);
		if (ar[8] != ar[maxInd]) {
			std::cout << "test 2 is BAD" << std::endl;
		}
	}


	std::cout << __func__ << " is OK" << std::endl;
}

void swap(int& a, int& b) {
	a += b;
	b = a - b;
	a = a - b;
}

std::pair<int, int> swap(int a, int b) {
	return std::pair<int,int>(b,a);
}

int main(int argc, char** argv) {
	test_getMax();

	return 0;
}
