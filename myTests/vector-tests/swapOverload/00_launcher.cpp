#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	swapOverload_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Non member overload swap", "basic tests", &swapOverload_basic );
	launchTests(testList);
}
