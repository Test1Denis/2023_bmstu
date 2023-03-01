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

void insertionSort(int*, int) {
	std::cout << __func__ << std::endl;
}

void mergeSort(int*, int) {
	std::cout << __func__ << std::endl;
}


void randFill1(int* ar, int size) {
	for (int i = 0; i < size; i++) {
		ar[i] = i + 1;
	}
}

void showAr(int* ar, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << ar[i] << " ";
	}
	std::cout << std::endl;
}

void test_Sort(void (*testSort)(int*, int)) {
	
	static int count = 0;
	std::cout << __func__ << " " << count++ << std::endl;
	static int ar[10];
	{
		testSort(ar, 10);
	}
}


int ar100[100];

void govnoCode() {
	for (int i = 0; i < 4; i++) {
		switch(i) {
			case 0 :
				insertionSort();	
			break;
			case 1 :
				mergeSort();
			break;
			case 2 :
				randFill();
			break;
			case 3 :
				showAr();
			break;
		}
}

void govnoCode_v2() {
	for (int i = 0; i < 4; i++) {
		if (i == 0) {

		}
		else if {

		}
		else if {

		}
		else if {

		}
	}
}


int main(int argc, char** argv) {
	//test_randFill();	
	void (*foo[10])(int*, int) = {insertionSort, mergeSort, randFill1, showAr};
	for (int i = 0; i < 4; i++) {
		test_Sort(foo[i]);
	}

	return 0;

}
