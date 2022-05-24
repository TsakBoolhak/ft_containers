#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	rend_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Rend", "basic test", &rend_basic );
	loadTest(testList, "Rend", "const and non const", &rend_constAndNonConst );
	launchTests(testList);
}
