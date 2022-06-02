#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	clear_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "clear()", "basic tests", &clear_basic);
	launchTests(testList);
}
