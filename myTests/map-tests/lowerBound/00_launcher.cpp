#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	lowerBound_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "lower_bound()", "basic tests", &lowerBound_basic);
	launchTests(testList);
}
