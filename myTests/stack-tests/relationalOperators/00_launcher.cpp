#include "loadTest.hpp"
#include "stackTests.hpp"
#include <iostream>
#include <list>

void	relationalOperators_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Non member overload relational operators", "basic tests", &relationalOperators_basic);
	launchTests(testList);
}
