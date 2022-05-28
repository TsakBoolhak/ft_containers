#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	swap_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Swap", "basic test", &swap_basic );
	launchTests(testList);
}
