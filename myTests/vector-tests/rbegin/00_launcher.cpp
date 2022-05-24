#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	rbegin_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Rbegin", "basic test", &rbegin_basic );
	loadTest(testList, "Rbegin", "rbegin equal rend on empty vec", &rbegin_equalRend );
	loadTest(testList, "Rbegin", "testing const and non const", &rbegin_constAndNonConst );
	launchTests(testList);
}
