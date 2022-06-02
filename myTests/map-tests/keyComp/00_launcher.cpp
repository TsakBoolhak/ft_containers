#include "loadTest.hpp"
#include "mapTests.hpp"
#include <iostream>
#include <list>

void	keyComp_launcher() {

	std::list< TestObj > testList;

	loadTest(testList, "key_comp()", "basic tests", &keyComp_basic);
	launchTests(testList);
}
