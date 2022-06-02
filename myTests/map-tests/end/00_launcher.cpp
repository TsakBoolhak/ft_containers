#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	end_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "end()", "basic tests", &end_basic);
	launchTests(testList);
}
