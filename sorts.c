#include "sorts.h"


int getMax(const int* ar, int size) {

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
void selectionSort(int* ar, int size) {
	while(size) {
		int indMax = getMax(&ar[0], size);
		swap(ar[indMax], ar[size-1]);
		size--;
	}
}
void test_selectionSort() {
	{
		const int SIZE = 10;
		int ar[SIZE] = {0,2,1,9,4,8,10,90,87,15};
		int etalon[SIZE] = {0,1,2,4,8,9,10,15,87,90};
		selectionSort(ar, SIZE);
		for (int i = 0; i < SIZE; i++) {
			if (ar[i] != etalon[i]) {
				std::cout << "test 1 is BAD" << std::endl;
				break;
			}
		}


	}

	std::cout << __func__ << " is OK" << std::endl;

}







/*
std::pair<int, int> swap(int a, int b) {
	return std::pair<int,int>(b,a);
}
*/
