#ifndef _sorts_h_
#define _sorts_h_

#include <iostream>

/*	input		:	array and size
 *	output		:	return sorted array as param of function
 *	description	:	realised sort algorithm of selection sort (O(n^2))
 *	date		:	22.02.2023
 *	author		:	I	
 */
void selectionSort(int*, int);
void swap(int&, int&);
int getMax(const int*, int);	/// return index of max element in array

void test_selectionSort();
void test_getMax(); 


#endif
