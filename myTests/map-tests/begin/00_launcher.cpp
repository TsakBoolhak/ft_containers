#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	begin_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "begin()", "basic tests", &begin_basic);
	launchTests(testList);
}
