#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	end_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "End", "basic test", &end_basic );
	loadTest(testList, "End", "const and non const", &end_constAndNonConst );
	launchTests(testList);
}
