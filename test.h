#ifndef _test_h_
#define _test_h_

#include <iostream>

template<typename T>
void run_test(T& func, const std::string& nameFunc) {
	std::cout <<	__func__ << std::endl;

	std::cout	<< "-----------------------\n"
				<< "start test : "  << nameFunc << std::endl;
	std::cout	<< "-----------------------\n";

	func();
}
#define RUN_TEST(func)	run_test(func, #func)
//void run_test1(void (*test)(), const std::string& nameFunc) {}


template<typename T>
void assert_equal(T expr, T expr_true, 
					const std::string& exprString, 
					const std::string& exprTrueString,
					int numTest = 0)
{
	static int currentTest = 0;
	currentTest++;
	if (numTest != 0) {
		currentTest = numTest;
	}
	std::cout << "\ttest " << currentTest;

#ifdef TEST_FULL_INFO
	std::cout << " param {" << exprString << " == " << exprTrueString << "} ";
#endif

	if (expr == expr_true) {
		std::cout << " PASSED\n";
		return;
	}

	std::cout << " BAD" << std::endl;
}
#define ASSERT_EQUAL(expr, expr_true)	assert_equal(expr, expr_true, #expr, #expr_true)
#define ASSERT_EQUAL_numTest(expr, expr_true, numTest)	assert_equal(expr, expr_true, #expr, #expr_true, numTest)


#endif
