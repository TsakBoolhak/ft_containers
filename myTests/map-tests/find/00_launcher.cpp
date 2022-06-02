#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	find_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "find()", "basic tests", &find_basic);
	launchTests(testList);
}
