#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	getAllocator_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "get_allocator()", "basic tests", &getAllocator_basic);
	launchTests(testList);
}
