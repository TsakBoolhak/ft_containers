#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	clear_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "clear()", "basic tests", &clear_basic);
	launchTests(testList);
}
