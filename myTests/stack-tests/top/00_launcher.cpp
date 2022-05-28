#include "loadTest.hpp"
#include "stackTests.hpp"
#include <iostream>
#include <list>

void	top_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "top", "basic tests", &top_basic);
	launchTests(testList);
}
