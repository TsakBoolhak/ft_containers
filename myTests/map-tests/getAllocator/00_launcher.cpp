#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	getAllocator_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "get_allocator()", "basic tests", &getAllocator_basic);
	launchTests(testList);
}
