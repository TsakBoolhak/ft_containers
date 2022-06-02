#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	erase_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "erase()", "basic tests", &erase_basic);
	launchTests(testList);
}
