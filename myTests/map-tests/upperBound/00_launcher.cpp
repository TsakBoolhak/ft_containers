#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	upperBound_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "upper_bound()", "basic tests", &upperBound_basic);
	launchTests(testList);
}
