#include <iostream>
#include <bitset>
#include <cstring>
#include <fstream>

void work_with_file() {
	FILE* fLog;
	fLog = fopen("test1", "w");

	for (int i = 0; i < 256; i++) {
		if (i != 0x0A) {
			fprintf(fLog, "0x%.2x\t%.3d\t%c\n", i, i, (char)i);
			continue;
		}
		fprintf(fLog, "0x%.2x\t%d\t%c", i, i, (char)i);
	}

	fclose(fLog);


	fLog = fopen("test1", "r");

	char str[8];
	int number;
	char tempChar;

	while(fscanf(fLog, "%s\t%d\t%c\n", &str[0], &number, &tempChar) != EOF) {
		std::cout << str << "\t" << number << "\t" << tempChar << std::endl;
	}


	fclose(fLog);

}


int main(int argc, char** argv) {
	work_with_file();
	
	return 0;

}
