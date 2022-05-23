#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	getAllocator_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Get_allocator", "basic test", &getAllocator_basic );
	launchTests(testList);
}
