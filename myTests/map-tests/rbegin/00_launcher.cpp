#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	rbegin_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "rbegin()", "basic tests", &rbegin_basic);
	launchTests(testList);
}
