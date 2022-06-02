#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	rbegin_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "rbegin()", "basic tests", &rbegin_basic);
	launchTests(testList);
}
