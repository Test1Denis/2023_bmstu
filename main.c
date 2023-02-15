#include <iostream>
#include <bitset>
#include <cstring>


struct BitAr {
	int* ar;	
	int size;

};
/*	input		:	string
 *	output		:	std::cout get binary code
 *	description	:	convert string to binary code
 *	date		:	2023.02.15
 *	author		:	
 *	version		:	v1.0
 */
int* convertStrToBitStr(const char* str) {	//нулевой элемент массива это число элементов в массиве
	int size = strlen(str);
	int* ar = new int [size * 8 + 1];	
	ar[0] = size * 8;	//size of all elements as bits 
	int iterBitAr = 1;	
	for (int i = 0; i < size; i++) {
		std::cout << std::bitset<8>(str[i]);
		auto tempStrBit = std::bitset<8>(str[i]).to_string();

		for (int k = 0; iterBitAr < 8*i + 8 + 1; iterBitAr++, k++) {
			ar[iterBitAr] = tempStrBit[k] - '0'; //0x30;
		}

	}
	std::cout << std::endl;


	return ar;
}

int* memoryPanic() {
	int* ar = new int [1000];
	return ar;
}


int strlen1(const char* str) {
	int size = 0;
	while(str[size++] != 0x00);
	return size-1;
}

int main(int argc, char** argv) {

	/*
	for (;;) {
		int* temp = memoryPanic();
		delete [] temp;
	}
	*/
	int* ar2 = 	convertStrToBitSt("la la la xz\0");
	std::cout << "-----" << std::endl;
	for (int i = 1; i < ar2[0] + 1; i++) {
		std::cout << ar2[i];
	}
	std::cout << "-----" << std::endl;
	delete [] ar2;
	return 0;
	task1("lalala xz\0");

	return 0;
	char* str;
	str = new char [128];
	memset(str, 0x00, 128);

	delete [] str;
	int a = 122;


	for (int i = 0; i < 10; i++) {

		a++;

		std::cout << std::dec << " dec = " << a 
				  << std::hex << " hex = " << a 
				  << " bin = " << std::bitset<8 * sizeof(int)>(a)
				  << std::endl;

	}

	return 0;
}
