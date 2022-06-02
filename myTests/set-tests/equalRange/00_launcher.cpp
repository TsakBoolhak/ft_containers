#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	equalRange_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "equal_range()", "basic tests", &equalRange_basic);
	launchTests(testList);
}
