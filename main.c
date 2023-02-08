#include <iostream>

int main(int argc, char** argv) {
	for (int i = 0; i < argc; i++) {

		std::cout << i << " : " << argv[i] << std::endl;
	}

	int a = 0x25F;
	std::cout << std::dec << a << " " << std::hex << a << std::endl;
	return 0;
}
