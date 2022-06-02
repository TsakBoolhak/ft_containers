#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	relationalOperators_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "relational operators", "basic tests", &relationalOperators_basic);
	launchTests(testList);
}
