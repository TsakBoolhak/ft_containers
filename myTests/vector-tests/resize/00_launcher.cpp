#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	resize_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Resize", "basic tests", &resize_basic );
	launchTests(testList);
}
