#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	constructor_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Constructor", "basic tests", &constructor_basic);
	launchTests(testList);
}
