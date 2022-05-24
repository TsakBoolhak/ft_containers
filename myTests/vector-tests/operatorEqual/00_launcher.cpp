#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	operatorEqual_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "operator =", "Valid index", &operatorEqual_basic );
	launchTests(testList);
}
