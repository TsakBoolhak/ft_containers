#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	valueComp_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "value_comp()", "basic tests", &valueComp_basic);
	launchTests(testList);
}
