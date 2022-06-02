#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	size_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "size()", "basic tests", &size_basic);
	launchTests(testList);
}
