#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	size_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Size", "basic tests", &size_basic );
	launchTests(testList);
}
