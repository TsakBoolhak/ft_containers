#include "loadTest.hpp"
#include "stackTests.hpp"
#include <iostream>
#include <list>

void	constructor_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Constructor", "basic tests", &constructor_basic);
	launchTests(testList);
}
