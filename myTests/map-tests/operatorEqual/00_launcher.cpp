#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	operatorEqual_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "operator=()", "basic tests", &operatorEqual_basic);
	launchTests(testList);
}
