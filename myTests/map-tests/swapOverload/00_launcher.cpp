#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	swapOverload_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "non-member algorithm overload swap()", "basic tests", &swapOverload_basic);
	launchTests(testList);
}
