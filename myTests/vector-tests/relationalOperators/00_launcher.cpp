#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	relationalOperator_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Non member overload relational operators", "basic tests", &relationalOperator_basic );
	launchTests(testList);
}
