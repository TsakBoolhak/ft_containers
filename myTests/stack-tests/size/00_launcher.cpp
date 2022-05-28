#include "loadTest.hpp"
#include "stackTests.hpp"
#include <iostream>
#include <list>

void	size_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "size", "basic tests", &size_basic);
	launchTests(testList);
}
