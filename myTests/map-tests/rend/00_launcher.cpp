#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	rend_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "rend()", "basic tests", &rend_basic);
	launchTests(testList);
}
