#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	maxSize_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "max_size()", "basic tests", &maxSize_basic);
	launchTests(testList);
}
