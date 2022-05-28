#include "loadTest.hpp"
#include "stackTests.hpp"
#include <iostream>
#include <list>

void	push_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "push", "basic tests", &push_basic);
	launchTests(testList);
}
