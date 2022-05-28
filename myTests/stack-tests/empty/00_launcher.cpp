#include "loadTest.hpp"
#include "stackTests.hpp"
#include <iostream>
#include <list>

void	empty_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "empty", "basic tests", &empty_basic);
	launchTests(testList);
}
