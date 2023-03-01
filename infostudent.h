#ifndef _infostudent_h_
#define _infostudent_h_

#include <iostream>
#include <time.h>
#include <cstring>

struct Student {
	int age;
	double averMark;
	char* name;
	char* numStudentTicket;
	int colorEyes;

	void foo();

	Student() {
		colorEyes = (rand()%255) << 16;
		age = 18;
		averMark = 5.0;
		name = nullptr;
		numStudentTicket = new char [16];
		memset(numStudentTicket, 0x00, 16);
	}

	~Student() {
		if (numStudentTicket != nullptr) {
			delete [] numStudentTicket;
		}
	}

	Student(int colorEye) {}
};


int countEyesByColor(struct Student* student, int size, int color);

#endif
