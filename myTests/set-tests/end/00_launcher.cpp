#include "loadTest.hpp"
#include "setTests.hpp"
#include <iostream>
#include <list>

void	end_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "end()", "basic tests", &end_basic);
	launchTests(testList);
}
