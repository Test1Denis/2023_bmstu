#include <iostream>

void convertFromPosToNeg(unsigned int number) {
	int	number1 = ~number;
	number1 += 0x01;
	std::cout << std::dec << "pos = " << number << " neg = " << number1 << std::endl;
}

void test_convertFromPosToNeg() {
	{	//test 1;
//		convertFormPosToNeg();
	}

}

int main(int argc, char** argv) {
	for (int i = 0; i < argc; i++) {

		std::cout << i << " : " << argv[i] << std::endl;
	}

	int a = 0x25F;
	std::cout << std::dec << a << " " << std::hex << a << std::endl;

	for (int i = 0; i < 32; i++) {
		std::cout << std::dec << (1 << i) 
					<< "\t" << (unsigned int)(1 << i)
				   	<< "\t"  << std::hex 
					<< (1 << i) 
					<< std::endl;
	}

	short b = 0x8005;
	std::cout << std::dec << "b = -5 real = " << b << std::endl;
	b = -5;
	std::cout << std::hex << b << std::endl;
	
	b = 5;
	b = ~b;
	b |= 0x01;
	std::cout << std::dec << b << std::endl;

	for (int i = 0; i < 10; i++) {
		convertFromPosToNeg(random() % 1000);
	}

	unsigned int tempInt = -1;

	std::cout << std::hex << tempInt << std::endl;

	return 0;
}
