#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	swap_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "swap()", "basic tests", &swap_basic);
	launchTests(testList);
}
