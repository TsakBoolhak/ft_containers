#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	count_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "count()", "basic tests", &count_basic);
	launchTests(testList);
}
