#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	swap_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "swap()", "basic tests", &swap_basic);
	launchTests(testList);
}
