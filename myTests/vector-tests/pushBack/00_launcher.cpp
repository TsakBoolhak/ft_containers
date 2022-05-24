#include "loadTest.hpp"
#include "vectorTests.hpp"
#include <iostream>
#include <list>

void	pushBack_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "Push_back", "basic tests", &pushBack_basic );
	launchTests(testList);
}
