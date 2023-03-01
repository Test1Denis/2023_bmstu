#include "infostudent.h"

int countEyesByColor(struct Student* st, int S, int colorEyes) {
	int count = 0;
	for (int i = 0; i < S; i++) {
		if (st[i].colorEyes > colorEyes) {
			count++;
		}
	}

	return count;
}
