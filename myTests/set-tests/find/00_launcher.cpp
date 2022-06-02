#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	find_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "find()", "basic tests", &find_basic);
	launchTests(testList);
}
