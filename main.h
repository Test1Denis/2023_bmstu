#ifndef _main_h_
#define _main_h_

#include <iostream>
#include <string>

void foo(int n, const std::string& nameN);
#define A(n)	foo(n, #n)

class Abase { 
	public :

};

void foo1(class Abase, const std::string& nameA);
#define A1(n)	foo1(n, #n)

#endif
